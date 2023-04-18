/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:47:57 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/18 07:22:49 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isAllDigit(std::string str) {
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i]) == 0) {
            std::cout << "ERROR" << std::endl;
            exit(0);
        }
    }
    return 1;
}

void fillVector(std::vector<long>&myVector, char **av) {
    std::string str;
    for (int i = 1; av[i]; i++) {
        str = av[i];
        if (isAllDigit(str))
            myVector.push_back(atol(str.c_str()));
    }
}

void fillDeque(std::deque<long>&myDique, char **av) {
    std::string str;
    for (int i = 1; av[i]; i++) {
        str = av[i];
        if (isAllDigit(str))
            myDique.push_back(atol(str.c_str()));
    }
}

void insertSort_vector(std::vector <long> &myVector) {
    for (std::vector<long>::iterator itoo = myVector.begin() + 1 ; itoo != myVector.end() ; ++itoo) {
        int key = *itoo;
        std::vector<long>::iterator tmp = itoo - 1;
        while (tmp >= myVector.begin() && *tmp > key) {
            *(tmp + 1) = *tmp;
            --tmp;
        }
        *(tmp + 1) = key;
    }
}

void merge_vector(std::vector<long>& vec, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
    std::vector<long> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort_vector(std::vector<long> &myVector, int left, int right) {
    if (right - left + 1 <= 51) {
        insertSort_vector(myVector);
        return ;
    }
    int middle = left + (right - left) / 2;
    merge_sort_vector(myVector, left, middle);
    merge_sort_vector(myVector, middle + 1, right);
    merge_vector(myVector, left, middle, right);
}

void insertSort_deque(std::deque <long> &mydeque) {
    std::deque<long> result;
    for (std::deque<long>::iterator it = mydeque.begin(); it != mydeque.end(); ++it) {
        if (result.empty()) {
            result.push_back(*it);
        } else if (*it < result.front()) {
            result.push_front(*it);
        } else if (*it > result.back()) {
            result.push_back(*it);
        } else {
            for (std::deque<long>::iterator rit = result.begin(); rit != result.end(); ++rit) {
                if (*it < *rit) {
                    result.insert(rit, *it);
                    break;
                }
            }
        }
    }
    mydeque = result;
}

void merge_deque(std::deque<long>&vec, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
    std::deque<long> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort_deque(std::deque<long> &mydeque, int left, int right) {
    if (right - left + 1 <= 51) {
        insertSort_deque(mydeque);
        return ;
    }

    int middle = left + (right - left) / 2;
    merge_sort_deque(mydeque, left, middle);
    merge_sort_deque(mydeque, middle + 1, right);
    merge_deque(mydeque, left, middle, right);
}

int main(int ac, char **av) {
    if (ac <= 1) {
        std::cerr << "ERROR ; Wrong number of arguments\n";
        return 0;
    }
    std::vector<long> vec;
    std::deque<long> deq;
    fillVector(vec, av);
    fillDeque(deq, av);
    std::cout << "Before : ";
    for (std::vector<long>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::clock_t startTime, endTime;
    startTime = clock();
    merge_sort_vector(vec, 0, vec.size() - 1);
    endTime = clock();
    std::cout << "After : ";
    for (std::vector<long>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    double totalTime = (double)(endTime - startTime) * 1000000 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << totalTime << " microseconds\n";

    std::cout << "====================================================================\n";
    
    std::cout << "Before : ";
    for (std::deque<long>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    startTime = clock();
    merge_sort_deque(deq, 0, deq.size() - 1);
    endTime = clock();
    std::cout << "After : ";
    for (std::deque<long>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    totalTime = (double)(endTime - startTime) * 1000000 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << totalTime << " microseconds\n";

    return 0;
}
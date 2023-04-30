/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:47:57 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/30 18:21:04 by aelandal         ###   ########.fr       */
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

// void insertSort_vector(std::vector <long> &myVector) {
//     for (std::vector<long>::iterator itoo = myVector.begin() + 1 ; itoo != myVector.end() ; ++itoo) {
//         int key = *itoo;
//         std::vector<long>::iterator tmp = itoo - 1;
//         while (tmp >= myVector.begin() && *tmp > key) {
//             *(tmp + 1) = *tmp;
//             --tmp;
//         }
//         *(tmp + 1) = key;
//     }
// }

// void merge_vector(std::vector<long>& vec, int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
    
//     std::vector<long> L(n1), R(n2);
//     for (int i = 0; i < n1; i++)
//         L[i] = vec[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = vec[m + 1 + j];

//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             vec[k] = L[i];
//             i++;
//         }
//         else {
//             vec[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         vec[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         vec[k] = R[j];
//         j++;
//         k++;
//     }
// }
// void merge_sort_vector(std::vector<long> &myVector, int left, int right) {
//     if (right - left + 1 <= 5) {
//         insertSort_vector(myVector);
//         return ;
//     }
//     int middle = left + (right - left) / 2;
//     merge_sort_vector(myVector, left, middle);
//     merge_sort_vector(myVector, middle + 1, right);
//     merge_vector(myVector, left, middle, right);
// }

void mergeInsertionSortVector(std::vector<long>& vec) {
    int n = vec.size();

    // If std::vector is already sorted or empty, return
    if (n <= 1) {
        return;
    }

    // Divide the std::vector into two halves
    std::vector<long> left;
    std::vector<long> right;
    for (int i = 0; i < n/2; i++) {
        left.push_back(vec.front());
        vec.erase(vec.begin());
    }
    while (!vec.empty()) {
        right.push_back(vec.front());
        vec.erase(vec.begin());
    }

    // Recursively sort the two halves
    mergeInsertionSortVector(left);
    mergeInsertionSortVector(right);

    // Merge the two sorted halves
    vec.clear();
    while (!left.empty() && !right.empty()) {
        if (left.front() <= right.front()) {
            vec.push_back(left.front());
            left.erase(left.begin());
        } else {
            vec.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while (!left.empty()) {
        vec.push_back(left.front());
        left.erase(left.begin());
    }
    while (!right.empty()) {
        vec.push_back(right.front());
        right.erase(right.begin());
    }

    // Perform insertion sort on the merged std::vector
    for (int i = 1; i < n; i++) {
        int j = i;
        int temp = vec[i];
        while (j > 0 && vec[j-1] > temp) {
            vec[j] = vec[j-1];
            j--;
        }
        vec[j] = temp;
    }
}


void mergeInsertionSortDeque(std::deque<long>& dq) {
    int n = dq.size();

    // If std::deque is already sorted or empty, return
    if (n <= 1) {
        return;
    }

    // Divide the std::deque into two halves
    std::deque<long> left;
    std::deque<long> right;
    for (int i = 0; i < n/2; i++) {
        left.push_back(dq.front());
        dq.pop_front();
    }
    while (!dq.empty()) {
        right.push_back(dq.front());
        dq.pop_front();
    }

    // Recursively sort the two halves
    mergeInsertionSortDeque(left);
    mergeInsertionSortDeque(right);

    // Merge the two sorted halves
    dq.clear();
    while (!left.empty() && !right.empty()) {
        if (left.front() <= right.front()) {
            dq.push_back(left.front());
            left.pop_front();
        } else {
            dq.push_back(right.front());
            right.pop_front();
        }
    }
    while (!left.empty()) {
        dq.push_back(left.front());
        left.pop_front();
    }
    while (!right.empty()) {
        dq.push_back(right.front());
        right.pop_front();
    }

    // Perform insertion sort on the merged std::deque
    for (int i = 1; i < n; i++) {
        int j = i;
        int temp = dq[i];
        while (j > 0 && dq[j-1] > temp) {
            dq[j] = dq[j-1];
            j--;
        }
        dq[j] = temp;
    }
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
    std::cout << deq.size() << std::endl;
    std::cout << "Before : ";
    for (std::vector<long>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::clock_t startTime, endTime;
    startTime = clock();
    mergeInsertionSortVector(vec);
    endTime = clock();
    std::cout << "_After : ";
    for (std::vector<long>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    double totalTime;
    totalTime = (double)(endTime - startTime) * 1000000 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << totalTime << " microseconds\n";

    std::cout << "================================================================================================\n";
    
    std::cout << "Before : ";
    for (std::deque<long>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    startTime = clock();
    mergeInsertionSortDeque(deq);
    endTime = clock();
    std::cout << "_After : ";
    for (std::deque<long>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    totalTime = (double)(endTime - startTime) * 1000000 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << totalTime << " microseconds\n";

    return 0;
}
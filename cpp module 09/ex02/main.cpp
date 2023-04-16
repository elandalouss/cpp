/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:47:57 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/16 13:33:40 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isAllDigit(std::string str) {
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i]) == 0) {
            std::cout << "-" << str[i] << "-" << std::endl;
            std::cout << "ERROR" << std::endl;
            exit(0);
        }
    }
    return 1;
}

void fillVector(std::vector<int>&myVector, char **av) {
    std::string str;
    for (int i = 1; av[i]; i++) {
        str = av[i];
        if (isAllDigit(str))
            myVector.push_back(atoi(str.c_str()));
    }
}

void insertSort(std::vector<int>& myVector) {
    std::vector<int>::iterator itoo, it;
    int tmp;
    for (itoo = myVector.begin() + 1; itoo != myVector.end() ; ++itoo)
        tmp = *itoo;
        it = itoo - 1;
    while (it != myVector.begin() && tmp > *it){
        *it = *(it - 1); 
        it--;
    }
    *it = tmp; 

}
void merge_sort(std::vector<int> &myVector, int left, int right) {
    if (right - left + 1 <= 10) {
        //? impiliment the insertion sort
        insertSort(myVector);
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
        std::cout << *it << std::endl;
        return ;
    }
    int middle = left + (right - left) / 2;
    merge_sort(myVector, left, middle);
    merge_sort(myVector, middle + 1, right);
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
        std::cout << *it << std::endl;
}

// int main(int ac, char **av) {
//     if (ac < 2) {
//         std::cout << "ERROR : check the number of argument" << std::endl;
//         return 0;
//     }
//     std::vector<int> myVector = fillVector(av);
//     merge_sort(myVector, 0, myVector.size() -1);
//     // for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
//     //     std::cout << *it << std::endl;
//     // for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
//     //     std::cout << *it << std::endl;
//     return 0;
// }

// using namespace std;

// void merge(vector<int>& vec, int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     std::cout << m << std::endl;
//     vector<int> L(n1), R(n2);
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

// void mergeSort(vector<int>& vec, int l, int r) {
//     if (l < r) {
//         int m = l + (r - l) / 2;

//         mergeSort(vec, l, m);
//         mergeSort(vec, m + 1, r);

//         merge(vec, l, m, r);
//     }
// }

int main(int ac, char **av) {
    (void)ac;
    std::vector<int> vec;
    fillVector(vec, av);
    merge_sort(vec, 0, vec.size() - 1);
    return 0;
}
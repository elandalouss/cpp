/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:47:57 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/12 14:31:29 by aelandal         ###   ########.fr       */
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

void merge(std::vector<int>& vec, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<int> L(n1), R(n2);
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

void mergeSort(std::vector<int>& vec, int left, int right) {
    if (left < right) {
        int m = left + (right - left) / 2;

        mergeSort(vec, left, m);
        mergeSort(vec, m + 1, right);

        merge(vec, left, m, right);
    }
}


std::vector<int> fillVector(char **av) {
    std::vector<int> myVector;
    std::string str;
    for (int i = 1; av[i]; i++) {
        str = av[i];
        if (isAllDigit(str))
            myVector.push_back(atoi(str.c_str()));
    }
    
    return myVector;
}
        
// int main(int ac, char **av) {
//     if (ac < 2) {
//         std::cout << "ERROR : check the number of argument" << std::endl;
//         return 0;
//     }
//     std::vector<int> myVector = fillVector(av);
//     // for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
//     //     std::cout << *it << std::endl;
//     return 0;

int main() {
    std::vector<int> vec;
    vec.push_back(67);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(12);
    vec.push_back(0);
    vec.push_back(87);
    vec.push_back(2);


    int n = vec.size();

    std::cout << "Given vector is: ";
    for (int i = 0; i < n; i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    mergeSort(vec, 0, n - 1);

    std::cout << "Sorted vector is: ";
    for (int i = 0; i < n; i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    return 0;
}
// }
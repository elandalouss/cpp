/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:48:29 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/30 20:21:59 by aelandal         ###   ########.fr       */
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

void fillVector(std::vector<long>&vec, char **av) {
    std::string str;
    for (int i = 1; av[i]; i++) {
        str = av[i];
        if (isAllDigit(str))
            vec.push_back(atol(str.c_str()));
    }
}

void fillDeque(std::deque<long>&deq, char **av) {
    std::string str;
    for (int i = 1; av[i]; i++) {
        str = av[i];
        if (isAllDigit(str))
            deq.push_back(atol(str.c_str()));
    }
}

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
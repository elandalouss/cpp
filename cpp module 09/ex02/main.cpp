/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:47:57 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/30 20:22:56 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
    mergeInsertionSortVector(vec);
    endTime = clock();
    std::cout << "_After : ";
    for (std::vector<long>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    double totalTime;
    totalTime = (double)(endTime - startTime) * 1000000 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << totalTime << " microseconds\n";

    std::cout << "=========================================================================\n";
    
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
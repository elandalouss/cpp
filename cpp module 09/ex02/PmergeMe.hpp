/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:44:06 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/30 20:34:31 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <deque>
#include <vector>
#include <cstdlib>

bool isAllDigit(std::string str);
void fillDeque(std::deque<int>&deq, char **av);
void fillVector(std::vector<int>&vec, char **av);
void mergeInsertionSortVector(std::vector<int>& vec);
void mergeInsertionSortDeque(std::deque<int>& dq);


#endif
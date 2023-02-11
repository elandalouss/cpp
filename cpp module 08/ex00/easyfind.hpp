/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:41:27 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 06:46:35 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class occurrenceNotFounf : public std::exception {
    const char* what() const throw() {
        return ("occurrence not found");
    };
};

template <typename T>
T easyfind(const std::vector<T> vec, int occu) {
    if (find(begin(vec), end(vec), occu) == end(vec))
        throw occurrenceNotFounf();
    return (occu);
};

#endif
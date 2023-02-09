/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:41:27 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/09 22:48:48 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>

class occurrenceNotFounf : public std::exception {
    const char* what() const throw() {
        return ("occurrence not found");
    };
};

template <typename T>
T easyfind(const std::vector<T> vec, int occu) {
    int vecSize = vec.size();
    for (int i = 0; i < vecSize; i++) {
        if (vec[i] == occu)
            return (occu);
    }
    throw occurrenceNotFounf();
};

#endif
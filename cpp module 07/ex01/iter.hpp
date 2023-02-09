/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:17:52 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/09 06:31:28 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T> void iter(T *arr, int len, void (*func)(const T &)) {
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

#endif
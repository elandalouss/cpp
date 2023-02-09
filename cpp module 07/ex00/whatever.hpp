/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:22:10 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/08 23:52:12 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include "whatever.hpp"


template <typename T> void    swap(T &v1, T &v2) {
    T   tmp;

    tmp = v1;
    v1 = v2;
    v2 = tmp;
}

template <typename T> T   min(T v1, T v2) {
    if (v1 < v2)
        return v1;
    return v2;
}
template <typename T> T       max(T v1, T v2) {
    if (v1 > v2)
        return v1;
    return v2;
}

#endif
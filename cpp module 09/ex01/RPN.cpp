/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:06:35 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/16 18:31:02 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string skipSpaces(char *str) {
    std::string ret;
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            ret[j] = str[i];
            j++;
        }
        i++;
    }
    return ret;
}

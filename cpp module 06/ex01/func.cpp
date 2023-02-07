/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:33:37 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/07 02:16:04 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
};

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
};
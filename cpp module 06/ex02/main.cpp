/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:01:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/07 18:10:34 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main() {
    Base *base = generate();
    identify(base);
    Base &base_ref = *base;
    identify(base_ref);
    return 0;
}
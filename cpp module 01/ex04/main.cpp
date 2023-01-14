/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:37:13 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 20:37:13 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcFile.h"

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << " ===>  check you're paramters [filename], [s1], [s2]" << std::endl;
        return 0; 
    }
    programFile(av[1], av[2], av[3]);
}

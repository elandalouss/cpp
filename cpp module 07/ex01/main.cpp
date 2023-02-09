/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:17:53 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/09 06:33:23 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void addOne(const int &i) {
    std::cout << "this : " << i << std::endl;
}

int main() {
    int arr[] = {6, 34, 2, 7, 0};
    iter(arr, 5, &addOne);
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:06:40 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/09 11:18:14 by aelandal         ###   ########.fr       */
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

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "ERROR : Wromg munber of argument" << std::endl;
        return 0;
    }
    std::string str = skipSpaces(av[1]);
    std::stack<int> myStack;
    // std::stack<int> tmpy;
    std::string tmp;
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i])) {
            tmp = str[i];   
            myStack.push(atoi(tmp.c_str()));
        }
        else {
            ;
        }
    }
    // tmpy = myStack;
    // while (!tmpy.empty()) {
    //     std::cout << tmpy.top() << std::endl;
    //     tmpy.pop();
    // }
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:06:40 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/14 09:11:09 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "ERROR : Wromg munber of argument" << std::endl;
        return 0;
    }
    std::string str, string = skipSpaces(av[1]);
    std::stack<int> myStack;
    int temp;
    for (int i = 0; string[i]; i++) {
        if (isdigit(string[i])) {
            str = string[i];   
            myStack.push(atoi(str.c_str()));
        }
        else {
            temp = myStack.top();
            myStack.pop();
            if (string[i] == '+')
                temp = myStack.top() + temp;
            else if (string[i] == '-')
                temp = myStack.top() - temp;
            else if (string[i] == '*')
                temp = myStack.top() * temp;
            else if (string[i] == '/') {
                if (temp == 0) {
                    std::cout << "ERROR : can't devide a number to 0" << std::endl;
                    return 0;
                }
                temp = myStack.top() / temp;
            }
            myStack.push(temp);
        }
    }
    std::cout << myStack.top() << std::endl;
    return 0;
}
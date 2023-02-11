/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:46:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 05:53:16 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void printStackElement(const MutantStack<int> &s) {
    std::stack<int> tmp = s;
    while (!tmp.empty()) {
        std::cout << tmp.top() << " ";
        tmp.pop();
    }
    std::cout << std::endl;
}

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    // mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    // mstack.pop();
    // printStackElement(mstack);
    // mstack.pop();
    // std::cout << std::endl;
    // std::cout << mstack.size() << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << mstack.top() << std::endl;
    // //[...]
    
    
    MutantStack<int>::iterator it = mstack.begin();
    // std::cout << *it << std::endl;
    MutantStack<int>::iterator ite = mstack.end();
    // std::cout << *ite << std::endl;
    // ++it;
    // --it;
    // std::cout << *it << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
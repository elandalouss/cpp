/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:46:34 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 05:59:35 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>

template <typename T, typename stack = std::stack<T> >
class MutantStack : public stack {
    public :
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() {
            std::cout << "Default constructor has been called from the MutantStack class" << std::endl;
        };
        MutantStack(const MutantStack &copy) {
            std::cout << "copy constructor has been called from the MutantStack class" << std::endl;
            this = copy;
        };
        MutantStack operator=(const MutantStack &copy) {
            std::cout << "copy assainement has been called from the MutantStack class" << std::endl;
            this = copy;
            return (*this);
        };
        ~MutantStack() {
            std::cout << "Destructor has been called from the MutantStack class" << std::endl;
        }
        iterator begin() {
            return (this->c.begin());
        }
        
        iterator end() {
            return (this->c.end());
        }
};

#endif
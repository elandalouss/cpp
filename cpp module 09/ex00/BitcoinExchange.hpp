/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:53:40 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/08 15:59:53 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cctype>
#include <ctype.h>
#include <cstring>
#include <cmath>

bool isAllDigit(std::string str);
void skipAllWhiteSpaces(std::string &str);
bool YYYY_MM_DD(std::string date);
int check_value(float value);
std::map<std::string, float> storeIntoMap(std::ifstream &infile, std::string delemiter);

#endif

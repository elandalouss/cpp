/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:53:40 by aelandal          #+#    #+#             */
/*   Updated: 2023/05/04 22:06:43 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <exception>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cctype>
#include <ctype.h>
#include <cstring>
#include <cmath>
#include <algorithm>

int isAllDigit(std::string str);
bool YYYY_MM_DD(std::string date);
int check_value(float value);
std::map<std::string, float> storeIntoMap(std::ifstream &infile, std::string delemiter);
void check_extantion(std::string str);
void str_trim(std::string &str);
#endif

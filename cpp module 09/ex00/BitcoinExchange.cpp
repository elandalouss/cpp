/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:55:05 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/16 18:00:06 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isAllDigit(std::string str) {
	int countDot = 0;
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i])) {
			if (str[i] != '.' && str[i] != '-')
				return 0;
			else {
				if (str[i] == '.') {
					countDot++;
					if (i == 0 || i == (int)str.length() - 1 || countDot > 1)
						return 0;
				}
			}
		}
	}
	return 1;
}

void skipAllWhiteSpaces(std::string &str) {
	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
		if (isspace(*it))
			it = str.erase(it);
	}
}

bool YYYY_MM_DD(std::string date) {
	std::string year;
	std::string month;
	std::string day;

	if (date.length() != 10) {
		std::cerr << "ERROR : check syntax" << std::endl;
		return 0;
	}
	if (date[4] != '-' || date[7] != '-') {
		std::cerr << "ERROR : check syntax" << std::endl;
		return 0;
	}
	year = date.substr(0, 4);
	month = date.substr(5, 2);
	day = date.substr(8, 2);
	if (!isAllDigit(year) || !isAllDigit(month) || !isAllDigit(day)) {
		std::cerr << "ERROR : Bad Input => " << date << std::endl;
		return 0;
	}
	if (atol(year.c_str()) < 2009 || atol(year.c_str()) <= 0 || atol(month.c_str()) < 1 || atol(month.c_str()) > 12 
		|| atol(day.c_str()) < 1 || atol(day.c_str()) > 31 || date[4] != '-' || date[7] != '-') {
		std::cerr << "ERROR : Bad Input => " << date << std::endl;
		return 0;
	}
	return 1;
}

int check_value(float value) {
	if (value < 0)
		return -1;
	else if (value > 1000)
		return 0;
	return 1;
}

std::map<std::string, float> storeIntoMap(std::ifstream &infile, std::string delemiter) {
	std::map<std::string, float> my_map;
	std::string line, str, key;
	float value;
	while (getline(infile, line)) {
		std::size_t pos = line.find(delemiter);
		if (pos != std::string::npos){
			str = line.substr(pos + 1);
			value = strtod(str.c_str(), NULL);
			key = line.substr(0, pos);
			my_map[key] = value;
		} else
			std::cout << "Error: bad input" << std::endl;
	}  
	return (my_map);
}

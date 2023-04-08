/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:58:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/08 15:51:00 by aelandal         ###   ########.fr       */
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
	if (atol(year.c_str()) <= 0 || atol(month.c_str()) < 1 || atol(month.c_str()) > 12 
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

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "ERROR : Wrorng Number Of Argument" << std::endl;
		return 0;
	}
	std::ifstream infile(av[1]), dataBase("data.csv");
	if (!infile || !dataBase){
		std::cerr << "ERROR : File Doesn't Open Successfully Lol" << std::endl;
		return (0);
	} if (infile.peek() == std::ifstream::traits_type::eof()) {
		std::cerr << "ERROR : Input file is Impty" << std::endl;
		return 0;
	}
	if (dataBase.peek() == std::ifstream::traits_type::eof()) {
		std::cerr << "ERROR : dataBase file is Impty" << std::endl;
		return 0;
	}
	std::map<std::string, float> dataBaseMap = storeIntoMap(dataBase, ",");
	std::string line, str, date;
	std::size_t pos;
	float value;
	while (getline(infile, line)) {
		pos = line.find("|");
		if (pos != std::string::npos) {
			str = line.substr(pos + 1);
			skipAllWhiteSpaces(str);
			if (!isAllDigit(str))
				std::cerr << "ERROR : the value can contain only numbers" << std::endl;
			else {
				value = strtod(str.c_str(), NULL);
				date = line.substr(0, pos - 1);
				if (YYYY_MM_DD(date)) {
					if (check_value(value) == 1) {
						std::map<std::string, float>::iterator it;
						it = dataBaseMap.upper_bound(date);
						if (it != dataBaseMap.begin())
							it--;
						std::cout << date << " => " << value << " = "  << value * it->second << std::endl;
					} else if (check_value(value) == -1)
						std::cerr << "Error: not a positive number." << std::endl;
					else if (check_value(value) == 0)
						std::cerr << "Error: too large a number." << std::endl;
				}
			}
		} else 
			std::cerr << "Error: no value" << std::endl;
	}
	return 0;
}

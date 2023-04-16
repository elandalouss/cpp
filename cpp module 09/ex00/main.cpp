/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:58:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/16 17:56:08 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void check_extantion(std::string str) {
	size_t dot = str.find(".");
	if (str.substr(dot, str.length()) != ".csv") {
		std::cerr << "File must be .csv 'FILE.csv'\n";
		exit(1);
	}
}

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "ERROR : Wrorng Number Of Argument" << std::endl;
		return 0;
	}
	check_extantion(av[1]);
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
		if (line.find("date") != std::string::npos || line.find("value") != std::string::npos)
			getline(infile, line);
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

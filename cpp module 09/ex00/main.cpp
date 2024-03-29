/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:58:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/05/05 18:09:14 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
		std::cerr << "ERROR : Input file is Empty" << std::endl;
		return 0;
	}
	if (dataBase.peek() == std::ifstream::traits_type::eof()) {
		std::cerr << "ERROR : dataBase file is Empty" << std::endl;
		return 0;
	}
	std::map<std::string, float> dataBaseMap = storeIntoMap(dataBase, ",");
	std::string line, str, date;
	std::size_t pos;
	float value;
	while (getline(infile, line)) {
		if (line.find("date") != std::string::npos || line.find("value") != std::string::npos)
			getline(infile, line);
		str_trim(line);
		pos = line.find("|");
		if (pos != std::string::npos) {
			str = line.substr(pos + 1);
			str_trim(str);
			std::replace(str.begin(), str.end(), ',', '.');
			char *rest;
			value = strtod(str.c_str(), &rest);
			if (*rest != '\0')
				std::cerr << "ERROR : syntax error" << std::endl;
			else {
				date = line.substr(0, pos);
				str_trim(date);
				if (YYYY_MM_DD(date)) {
					if (check_value(value) == 1) {
						std::map<std::string, float>::iterator it;
						it = dataBaseMap.upper_bound(date);
						if (it != dataBaseMap.begin())
							it--;
						std::cout << date << " => " << value << " = "  << value * it->second << std::endl;
					} 
					else if (check_value(value) == -1)
						std::cerr << "Error : need a larger number." << std::endl;
					else if (check_value(value) == 0 || check_value(value) == -1)
						std::cerr << "Error: too large a number." << std::endl;
					}
			}
		} else 
			std::cerr << "Error: no value" << std::endl;
	}
	return 0;
}


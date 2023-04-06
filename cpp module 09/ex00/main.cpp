/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:58:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/06 16:05:54 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
	
	year = date.substr(0, 4);
	month = date.substr(5, 2);
	day = date.substr(8, 2);
	if (atol(year.c_str()) <= 0 || atol(month.c_str()) < 1 || atol(month.c_str()) > 12 
		|| atol(day.c_str()) < 1 || atol(day.c_str()) > 31 || date[4] != '-' || date[7] != '-')
		return 0;
	return 1;
}

bool check_value(float value) {
	if (value < 0 || value > 1000)
		return 0;
	return 1;
}

std::map<std::string, float> storeIntoMap(std::ifstream &infile, std::string delemiter) {
	std::map<std::string, float> my_map;
	std::string line;
	while (getline(infile, line)) {
		skipAllWhiteSpaces(line);
		std::size_t pos = line.find(delemiter);
		if (pos != std::string::npos){
			std::string str = line.substr(pos + 1);
			float value = atof(str.c_str());
			std::string key = line.substr(0, pos);
			if (YYYY_MM_DD(key) && check_value(value))
				my_map[key] = value;
			else
				std::cerr << "ERROR : Bed Date or value" << std::endl;
				
			// std::cout << "value : " << value << " key : " << key << std::endl;
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
	} else
		std::map<std::string, float> dataBaseMap = storeIntoMap(dataBase, ",");
	std::string line;
	while (getline(infile, line)) {
		 
	}
	return 0;
}

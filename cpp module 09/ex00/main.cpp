/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:58:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/04/06 12:02:50 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// int check_pipe(std::string line) {
// 	std::size_t pos = line.find("|");
// 	if (pos == std::string::npos) {
// 		std::cerr << "ERROR : input should be liks [date | value]" << std::endl;	
// 		return -1;
// 	} else if (pos != std::string::npos) {	
// 	}
// 	return 1;
// }

// void check_errors(std::string line) {
// 	if (check_pipe(line) == -1)
// 		return ;
// }

void skipAllWhiteSpaces(std::string &str) {
	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
		if (isspace(*it))
			it = str.erase(it);
	}
}

std::map<std::string, float> storeIntoMap(std::ifstream &infile, std::string delemiter) {
	std::map<std::string, float> my_map;
	(void)delemiter;
	std::string line;
	while (getline(infile, line)) {
		skipAllWhiteSpaces(line);
		// check_errors(line_infile);
		std::size_t pos = line.find(delemiter);
		if (pos != std::string::npos){
			std::string str = line.substr(pos + 1);
			float a = atof(str.c_str());
			my_map[line.substr(0, pos)] = a;
		// std::cout << str << std::endl;
			std::cout << "key : " << line.substr(0, pos) << " value : " << a << std::endl;
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
	} else {
		// std::map<std::string, float> dataBaseMap = storeIntoMap(dataBase, ",");
		std::map<std::string, float> infileMap = storeIntoMap(infile, "|");
	}
	return 0;
}

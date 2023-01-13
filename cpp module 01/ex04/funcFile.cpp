/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:36:56 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 20:37:07 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcFile.h"

void    programFile (std::string filename, std::string s1, std::string s2) {

    std::string line, fileraplace = filename + ".raplace";
    std::fstream    fileOne;


    fileOne.open(filename, std::ifstream::in);
    if (!fileOne.is_open())
    {
        std::cerr << "failed to open file" << filename << std::endl;
        return ;
    }

    std::ofstream   fileTwo(fileraplace, std::ofstream::trunc);
    if (!fileTwo.is_open())
    {
        std::cerr << "failed to open file " << fileraplace << std::endl;
        return ;
    } else {
        int position = 0;
        std::size_t found = line.find(s1);
        while (getline (fileOne, line)) {
            found = line.find(s1, found+1);
            while (found!=std::string::npos) {
                line.erase(found, s1.length());
                line.insert(found, s2);
                found = line.find(s1, found+1);
            }
            fileTwo << line << std::endl;
        }
    }
}

#include <iostream>
#include <fstream>

void    programFile (std::string filename, std::string s1, std::string s2) {
    std::string line, fileraplace = filename + ".raplace";
    std::fstream    fileOne;


    fileOne.open(filename, std::ifstream::in);
    if (!fileOne.is_open())
    {
        std::cerr << "failed to open file " << filename << std::endl;
        return ;
    }

    std::ofstream   fileTwo(fileraplace, std::ofstream::trunc);
    if (!fileTwo.is_open())
    {
        std::cerr << "failed to open file " << fileraplace << std::endl;
        return ;
    } else {
        while (getline (fileOne, line)) {
            // std::cout << line << std::endl;
            if (line.find(s1)) {
                std::cout << "index" << std::endl;
            }
        }
    }
}

int main() {
    programFile("abc", "hello", "d");
}
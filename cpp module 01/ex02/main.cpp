#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    //The memory address 
    std::cout << "The memory address of:" << std::endl;
    std::cout << "\t" << "string :" << std::endl;
    std::cout << "\t\t" << &str << std::endl;
    std::cout << "\t" << "stringPTR :" << std::endl;
    std::cout << "\t\t" << &stringPTR << std::endl;
    std::cout << "\t" << "stringREF :" << std::endl;
    std::cout << "\t\t" << &stringREF << std::endl;

    std::cout << "=======================================" << std::endl;
    //The value

    std::cout << "The value of:" << std::endl;
    std::cout << "\t" << "string :" << std::endl;
    std::cout << "\t\t" << str << std::endl;
    std::cout << "\t" << "stringPTR :" << std::endl;
    std::cout << "\t\t" << *stringPTR << std::endl;
    std::cout << "\t" << "stringREF :" << std::endl;
    std::cout << "\t\t" << stringREF << std::endl;

}
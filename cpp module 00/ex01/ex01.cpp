#include <iostream>


int main()
{
    class PhoneBook {
        public:
         std::string  contact;
    };
    PhoneBook hello;

    hello.contact = "AYOUB";
    std::cout << hello.contact << std::endl;
}
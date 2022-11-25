#include <iostream>

void upper_case(char *str)
{
    int  i = 0;
    char c;
    while (str[i])
    {
        c = toupper(str[i]);
        std::cout << c;
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        std::string str;
        while (i <= ac - 1)
        {
            upper_case(av[i]);
            std::cout << ' ';
            if (i == ac - 1)
            {
                std::cout << std::endl;
                break ;
            }
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
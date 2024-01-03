#include "copies.hpp"

int main(int ac , char **av)
{
    if(ac != 4)
        std::cout << "ERROR : argument" << std::endl;
    else if (std::string(av[2]).empty() || std::string(av[3]).empty())
        std::cout << "ERROR : argument" << std::endl;
    else
    {
        Copies copies(av[2],av[3],av[1]);
        copies.copy(); 
    }
    return 0;
}
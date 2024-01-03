#include "Harl.hpp"

Harl::Harl()
{

}

void Harl::info()
{
    std::cout << "[INFO] " << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::debug()
{
    std::cout << "[DEBUG] " << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING] " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR] " << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*ptr[i])();
            break;
        }
        i++;
    }
}

Harl::~Harl()
{

}
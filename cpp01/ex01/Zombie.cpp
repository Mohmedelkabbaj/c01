#include "Zombie.hpp"

Zombie::Zombie()
{
   std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name)
{
   this->_name = name;
   std::cout << "Zombie created" << std::endl;
   std::cout << "Name: " << this->_name << std::endl;
}

Zombie::~Zombie()
{
   std::cout << "Name: " << this->_name << std::endl;
   std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::setname(std::string name)
{
   this->_name = name;
}

void Zombie::announce()
{
   std::cout << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

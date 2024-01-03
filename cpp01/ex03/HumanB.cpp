#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) , weapon(NULL)
{

}

void HumanB::attack(void)
{
    if (!this->weapon)
        std::cout << this->name << " attacks with their bare hands" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB()
{

}
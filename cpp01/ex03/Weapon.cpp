#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string const & Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{

}
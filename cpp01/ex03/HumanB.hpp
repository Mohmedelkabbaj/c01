#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
   private:
      std::string name;
      Weapon *weapon;
   public:
      HumanB(std::string name);
      void setWeapon(Weapon &Weapon);
      void attack();
      ~HumanB();
}; 

#endif
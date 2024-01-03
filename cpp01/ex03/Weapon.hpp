#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
   private:
      std::string type;
   public:
      Weapon(std::string type);
      std::string const &getType() const;
      void setType(std::string type);
      ~Weapon();
};

#endif
#include "Zombie.hpp"

int main()
{
   Zombie *zombie1 = newZombie("Zombie1");
   zombie1->announce();
   randomChump("Zombie1");
   delete zombie1;
}
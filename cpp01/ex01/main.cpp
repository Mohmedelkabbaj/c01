#include "Zombie.hpp"

int main()
{
   int i;

   i = 0;
   Zombie *zombie1 = zombieHorde(3,"Zombie1");
   while (zombie1 && i < 3)
   {
      zombie1[i].announce();
      i++;
   }
   delete [] zombie1;
   return (0);
}
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
   int i;

   i = 0;
   if(N != 0)
   {
      Zombie *zombie = new Zombie[N];
      while (i < N)
      {
         zombie[i].setname(name);
         i++;
      }
      return (zombie);
   }
   else
   {
      return (NULL);
   }
}
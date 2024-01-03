#include <iostream>

int main()
{
   std::string str = "HI THIS IS BRAIN";
   std::string *ptr = &str;
   std::string &ref = str;

   ptr = &str;
   std::cout << "pointer" << *ptr << std::endl;
   std::cout << "reference" << ref << std::endl;
}
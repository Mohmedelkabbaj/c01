#include <iostream>
#include <fstream>

class Copies
{
    private:
        std::string s1;
        std::string s2;
        std::string filename1;
        std::string filename2;

    public:
        Copies(std::string str1, std::string str2, std::string filename1);
        ~Copies();
        void copy();
};
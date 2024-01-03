#include "copies.hpp"

Copies::Copies(std::string s1, std::string s2, std::string filename) : s1(s1) , s2(s2)
{
    this->filename1 = filename;
    this->filename2 = filename1 + ".replace";
}

Copies::~Copies()
{

}

void Copies::copy()
{
    std::ifstream file1(this->filename1);
    std::ofstream file2(this->filename2);
    std::string line, expline;

    if(!file1)
        std::cout << "Error: Unable to open input file." << std::endl;
    else
    {
        while(getline(file1, line) && file2.is_open() && !file1.eof())
        {
            size_t i = 0;
            expline.clear();
            while((i = line.find(this->s1, i)) != std::string::npos)
            {
                expline += line.substr(0,i) + this->s2;
                i += this->s1.length();
                line = line.substr(i);
                i = 0; 
            }
            expline += line;
            file2 << expline << std::endl;
        }
        file1.close();
        file2.close();
    }
}
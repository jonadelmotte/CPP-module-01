#include <iostream>
#include <string>
#include <fstream>

//replace (string.erase(index of erase, size of erase))  (string.insert(pos of insert, string to insert))

int main(int argc, char *argv[])
{
    std::string arg = argv[1];
    std::string striiing;
    std::ofstream    outfile;
    std::ifstream   infile;

    infile.open(arg);
    outfile.open(arg + ".replace");
    if (infile.is_open() == true)
    {
        while (std::getline(infile, striiing))
            outfile << striiing << std::endl;
    }
    else
        std::cout << "is not open" << std::endl;
    return 0;
}
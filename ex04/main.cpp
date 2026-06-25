#include <iostream>
#include <string>
#include <fstream>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"

//replace (string.erase(index of erase, size of erase))  (string.insert(pos of insert, string to insert))

std::string search_and_replace(std::string buffer, std::string search, std::string replace)
{
    size_t index = 0;
    size_t index2 = 0;
    while (buffer[index])
    {
        while (buffer[index + index2] == search[index2])
        {
            std::cout << &buffer[index + index2] << std::endl;
            index2++;
        }
        if (index2 == search.length())
        {
            buffer.erase(index, search.length());
            buffer.insert(index, replace);
        }
        index2 = 0;
        index++;
    }
    return (buffer);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << RED "The programe must be used like this : " BLUE "./tete filename s1 s2" RESET << std::endl;
        return 1;
    }
    std::string file = argv[1];
    std::string search = argv[2];
    std::string replace = argv[3];
    std::string buf;
    std::ofstream    outfile;
    std::ifstream   infile;

    infile.open(file);
    outfile.open(file + ".replace");
    if (infile.is_open() == true)
    {
        while (std::getline(infile, buf))
        {
            buf = search_and_replace(buf, search, replace);
            outfile << buf;
            if (infile.peek() != EOF)
                outfile << std::endl;
        }
    }
    else
        std::cout << "is not open" << std::endl;
    return 0;
}
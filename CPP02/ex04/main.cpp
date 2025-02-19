#include "includes.hpp"

int open_file_error()
{
    std::cerr << "Error, can't open the file\n";
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string fileName = av[1];
        std::string filename_replace = fileName + ".replace";
        std::string s1 = av[2];
        std::string s2 = av[3];

        if (s1.empty() || s2.empty() || fileName.empty())
        {
            std::cout << "Error: Input strings cannot be empty. Try again.\n";
            return (1);
        }

        std::ifstream srcFile(fileName.c_str());
        if (!srcFile.is_open())
            return open_file_error();

        std::ofstream newFile(filename_replace.c_str());
        if (!newFile.is_open())
            return open_file_error();

        std::string line;
        while (std::getline(srcFile, line))
        {
            size_t pos = 0;
            while ((pos = line.find(s1)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
            }
            newFile << line << "\n";
        }
        srcFile.close();
        newFile.close();
    }
    else
    {
        std::cerr << "Usage: ./program <filename> <s1> <s2>\n";
        return (1);
    }
    return (0);
}

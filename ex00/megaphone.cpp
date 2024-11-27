#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            if (i > 1)
                std::cout << " ";
            std::string tmp = av[i];
            for (int j = 0; j < tmp.length(); j++)
            {
                char c = std::toupper(tmp[j]);
                std::cout << c;
            }
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
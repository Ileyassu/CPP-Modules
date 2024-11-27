#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

// int main(int ac, char **av)
// {
//     int i;

//     i = 1;
//     while(av[i])
//     {
//         std :: string str = av[i];
//         std :: transform(str.begin(), str.end(), str.begin(), ::toupper);
//         std :: cout << str;
//         if(av[i + 1])
//             std :: cout << " ";
//         i++;
//     }
//     std :: cout << "\n";
// }

int main (int ac, char **av)
{
    int i = 1;
    int j = 0;
    char c;

    while (av[i])
    {
        j = 0;
        while(av[i][j])
        {
            c = av[i][j];
            c = std::toupper(c);
            std :: cout << c;
            j++;
        }
        i++;
    }
    std :: cout << "\n";
    
}
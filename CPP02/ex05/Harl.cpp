#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int Harl_processing(std::string complain)
{
    std::string arr[5] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
        ""
    };
    int i = 0;
    while(arr[i] != complain && !arr[i].empty())
        i++;
    return i + 1;

}
void Harl::complain( std::string level )
{
    if (level.empty())
    {
        std::cout << "No complains, Harl is being a good boy.\n";
        return;
    }
    void (Harl::*ptr)(void);//
    ptr = NULL;
    switch (Harl_processing(level))
    {
    case 1 :
        ptr = &Harl::debug;
         break;
    case 2 :
        ptr = &Harl::info;
            break;
    case 3 :
        ptr = &Harl::warning;
        break;
    case 4 :
        ptr = &Harl::error;
        break;
    default:
        std::cout << "errrorororor\n";
        break;
    }

    if (ptr != NULL)
        (this->*ptr)();
}
#include "includes.hpp"

int main()
{
    Phonebook phonebook;
    int counter = 0;
    while(42)
    {
        std::string command;
        std::cout << "Please enter a command : ";
        std::cin >> command;
        if (command == "ADD"){
            phonebook.add_contact(counter);
            counter++;
        }
        else if (command == "SEARCH")
            phonebook.contact_picker(counter); //should search then list
    }
}
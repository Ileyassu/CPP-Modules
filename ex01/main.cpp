#include "includes.hpp"

void failed_cin()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Input error. Please try again.\n";
}

bool is_alphanumeric(const std::string& str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!std::isalnum(static_cast<unsigned char>(*it))) {
            return false;
        }
    }
    return true;
}


int main()
{
    Phonebook phonebook;
    phonebook.init_contacts();
    int counter = 0;
    while(42)
    {
        std::string command;
        std::cout << "Please enter a command : ";
        std::cin >> command;
        if (std::cin.eof()) {
            std::cout << "End of input reached.\n";
            break;
        }
        if (std::cin.fail()) {
            failed_cin();
            continue;  // Skip the rest of the loop and prompt for input again
        }

        if (command == "ADD" && is_alphanumeric(command)){
            counter += phonebook.add_contact(counter);
        }
        else if ((command == "SEARCH" && counter != 0 && is_alphanumeric(command)))
            phonebook.contact_picker(counter);
        else if (command == "EXIT" && is_alphanumeric(command) && !(std::cin.eof()))
        {
            std::cout << "all contacts destroyed.\n";   
            break;
        }
        if (std::cin.fail())
        {
            failed_cin();
        }
    }
    phonebook.delete_contacts(counter);
}
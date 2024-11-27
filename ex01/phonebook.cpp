#include "includes.hpp"

void Phonebook::add_contact(int index)
{
    if (index <= 8)
    {
        contacts[index].set_index(index);
    }
    else
    {
        index = 7;
    }
    std::string first_name;
    std::string last_name; 
    std::string phone_number;
    std::string darkest_secret;
    std::cout << "contact[" << index << "].first_name : ";
    std::cin >> first_name;
    std::cout << "contact[" << index << "].last_name : ";
    std::cin >> last_name;
    std::cout << "contact[" << index << "].phone_number : ";
    std::cin >> phone_number;
    std::cout << "contact[" << index << "].darkest_secret : ";
    std::cin >> darkest_secret;
    contacts[index].set_first_name(first_name);
    contacts[index].set_last_name(last_name);
    contacts[index].set_phone_number(phone_number);
    contacts[index].set_darket_secret(darkest_secret);
    std::cout << sizeof(contacts) / sizeof(contacts[0]) << "\n";
}

std::string Phonebook::ten_character_filter(std::string str)
{
    int rest = 10 - str.length();
    if(str.length() > 10)
        return (str.substr(0, 7) + "...");
    else
        return (std::string(rest, ' ') + str);
}

void Phonebook::list_contacts(int counter)
{
    if (counter >= 8)
    {
        counter = 8;
    }
    for (int i = 0;i < counter; i++)
    {
        std :: cout << contacts[i].get_index() << "|"
        << ten_character_filter(contacts[i].get_first_name()) << "|"
        << ten_character_filter(contacts[i].get_last_name()) << "|" 
        << ten_character_filter(contacts[i].get_phone_number()) << "|" 
        << ten_character_filter(contacts[i].get_darkest_secret()) << "\n";
    }
}

void Phonebook::contact_picker(int counter)
{
    int contact_index;
    Phonebook::list_contacts(counter);
    std::cout << "Pick a contact : ";
    std::cin >> contact_index;
    if (contact_index < 0 || contact_index > counter)//should add protection
    {
        std::cout << "Wrong pick";
    }
    else
    {
        std :: cout << contacts[contact_index].get_index() << "|"
        << ten_character_filter(contacts[contact_index].get_first_name()) << "|"
        << ten_character_filter(contacts[contact_index].get_last_name()) << "|" 
        << ten_character_filter(contacts[contact_index].get_phone_number()) << "|" 
        << ten_character_filter(contacts[contact_index].get_darkest_secret()) << "\n";
    }
}
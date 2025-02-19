/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaiss <ibenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:36:52 by ibenaiss          #+#    #+#             */
/*   Updated: 2024/12/05 10:36:53 by ibenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int Phonebook::add_contact(int index)
{
    if (index <= 7)
        contacts[index].set_index(index);
    else if (index > 7)
        index = 7;
    std::string first_name;
    std::string last_name; 
    std::string phone_number;
    std::string darkest_secret;
    std::string nickname;

    std::cout << "contact[" << index << "].first_name : ";
    std::getline(std::cin, first_name);
    if (first_name.empty() || !is_alphanumeric(first_name))
    {
        if (std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            exit(1);
        }
        std::cout << "error while adding contact, try again\n";
        return 0;
    }else if (std::cin.fail()) {
        std::cout << "Input error!" << std::endl;
    }
    std::cout << "contact[" << index << "].last_name : ";
    std::getline(std::cin, last_name);
    if(last_name.empty() || !is_alphanumeric(last_name))
    {
        if (std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            exit(1);
        }
        std::cout << "error while adding contact, try again\n";
        return 0;
    }else if (std::cin.fail()) {
        std::cout << "Input error!" << std::endl;
    }
    std::cout << "contact[" << index << "].nickname : ";
    std::getline(std::cin, nickname);
    if(nickname.empty() || !is_alphanumeric(nickname))
    {
        if (std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            exit(1);
        }
        std::cout << "error while adding contact, try again\n";
        return 0;
    }else if (std::cin.fail()) {
        std::cout << "Input error!" << std::endl;
    }
    std::cout << "contact[" << index << "].phone_number : ";
    std::getline(std::cin, phone_number);
    if(phone_number.empty() || !is_alphanumeric(phone_number))
    {
        if (std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            exit(1);
        }
        std::cout << "error while adding contact, try again\n";
        return 0;
    }else if (std::cin.fail()) {
        std::cout << "Input error!" << std::endl;
    }
    std::cout << "contact[" << index << "].darkest_secret : ";
    std::getline(std::cin, darkest_secret);
    if(darkest_secret.empty() || !is_alphanumeric(darkest_secret))
    {
        if (std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            exit(1);
        }
        std::cout << "error while adding contact, try again\n";
        return 0;
    }else if (std::cin.fail()) {
        std::cout << "Input error!" << std::endl;
    }
    contacts[index].set_first_name(first_name);
    contacts[index].set_last_name(last_name);
    contacts[index].set_nickname(nickname);
    contacts[index].set_phone_number(phone_number);
    contacts[index].set_darket_secret(darkest_secret);
    return 1;
}

std::string Phonebook::ten_character_filter(std::string str)
{
    int rest = 10 - str.length();
    if(str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (std::string(rest, ' ') + str);
}

void Phonebook::list_contacts(int counter)
{
    int i = 0;
    if (counter > 7)
    {
        counter = 7;
    }
    std::cout << "----------------------------------------------------\n";
    while(i <= counter && contacts[i].get_index() != -1)
    {
        std :: cout << "         " << contacts[i].get_index() << "|"
        << ten_character_filter(contacts[i].get_first_name()) << "|"
        << ten_character_filter(contacts[i].get_last_name()) << "|" 
        << ten_character_filter(contacts[i].get_phone_number()) << "|"
        << ten_character_filter(contacts[i].get_nickname()) << "|" 
        << ten_character_filter(contacts[i].get_darkest_secret()) << "\n";
        i++;
    }
}

void Phonebook::contact_picker(int counter)
{
    int contact_index;
    Phonebook::list_contacts(counter);
    std::cout << "Pick a contact : ";
    std::cin >> contact_index;
    if (contact_index < 0 || contact_index > counter || isdigit(contact_index) != 0)
    {
        std::cout << "Wrong pick, ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
    else
    {
        std :: cout << "         " << contacts[contact_index].get_index() << "|"
        << ten_character_filter(contacts[contact_index].get_first_name()) << "|"
        << ten_character_filter(contacts[contact_index].get_last_name()) << "|" 
        << ten_character_filter(contacts[contact_index].get_phone_number()) << "|"
        << ten_character_filter(contacts[contact_index].get_nickname()) << "|" 
        << ten_character_filter(contacts[contact_index].get_darkest_secret()) << "\n";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Phonebook::delete_contacts(int index)
{
    for (int i = 0; i < index; i++)
    {
        contacts[index].set_first_name("");
        contacts[index].set_last_name("");
        contacts[index].set_nickname("");
        contacts[index].set_phone_number("");
        contacts[index].set_darket_secret("");
    }
}

void Phonebook::init_contacts()
{
    int i = 0;
    while(i <= 7)
    {
        contacts[i].set_index(-1);
        i++;
    }
}
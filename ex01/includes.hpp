#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
class Contact
{
    private :
        int index;
        std::string first_name;
        std::string last_name;
        std::string phone_number;
        std::string darkest_secret;
    public :
        int get_index();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_phone_number();
        std::string get_darkest_secret();

        void set_index(int index);
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_phone_number(std::string phone_number);
        void set_darket_secret(std::string darkest_secret);
};

class Phonebook
{
    private :
        Contact contacts[9];
    public :
        void add_contact(int index);
        void list_contacts(int index);
        void contact_picker(int counter);
        std::string ten_character_filter(std::string str);
        // void search_contact(int index);
        // void delete_contact(int index);
        // void exit_phonebook();

};
#endif
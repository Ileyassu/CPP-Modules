#include "includes.hpp"

//getters
int Contact::get_index()
{
    return index;
}

std::string Contact::get_first_name()
{
    return first_name;
}

std::string Contact::get_last_name()
{
    return last_name;
}
std::string Contact::get_phone_number()
{
    return phone_number;
}

std::string Contact::get_darkest_secret()
{
    return darkest_secret;
}

//setters

void Contact::set_index(int index)
{
    this->index = index;
}
void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}
void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}
void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}
void Contact::set_darket_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}


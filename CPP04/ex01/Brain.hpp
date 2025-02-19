#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain 
{
    private : 
        std::string idea[100];
    public :
        Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
        ~Brain();
        void setIdea(std::string idea, int index);
        std::string getIdea(int index);
};

#endif
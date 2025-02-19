#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor\n";
};

Brain::Brain(const Brain &obj)
{
    std::cout << "copy Brain constructor\n";
    for (int i = 0; i < 100; i++)
    {
        this->idea[i] = obj.idea[i];
    }
};

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain copy assignement operator\n";
    if (this == &obj)
        return *this;
    for (int i = 0; i < 100; i++)
    {
        this->idea[i] = obj.idea[i];
    }
    return *this;
};

Brain::~Brain()
{
    std::cout << "Brain destructor\n";
}
void Brain::setIdea(std::string ideaStr, int index)
{
    if (index < 0 || index >= 100)
    {
        return;
    }
    this->idea[index] = ideaStr;
}

std::string Brain::getIdea(int index)
{
    if (index < 0 || index >= 100)
        return "";
    return this->idea[index];
}
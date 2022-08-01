#include "animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constractor called!" << std::endl;
}

Animal::Animal( std::string _type )
{
    std::cout << "Anima Copy Constractor called!" << std::endl;
    type = _type;
}

Animal::~Animal()
{
    std::cout << "Animal Deconstractor called!" << std::endl;
}

std::string Animal::getType()
{
    return (type);
}

Dog::Dog()
{
    std::cout << "Dog Constractor called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Deconstractor called!" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat Constractor called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Deconstractor called!" << std::endl;
}

void Animal::makeSound()
{
    std::cout << "3aw" << std::endl;
}
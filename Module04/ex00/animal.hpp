#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal( std::string );
        ~Animal();
        std::string getType();
        void makeSound( void );
};

class Dog : public Animal
{
    public:
        Dog();
        Dog( std::string );
        ~Dog();
};

class Cat : public Animal
{
    public:
        Cat();
        Cat( std::string );
        ~Cat();
};

#endif
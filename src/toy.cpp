#include "toy.h"

Toy::Toy(const std::string& inName): name(inName) { }

Toy::~Toy()
{
    std::cout << "Toy " << name << " was dropped " << std::endl;
}

std::string Toy::getName() const
{
    return name;
}
#pragma once

#include <iostream>
#include <string>
#include <memory>
#include "toy.h"

class Dog
{
private:
    std::string name;
    int age;
    std::shared_ptr<Toy> toy;
public:
    // constructors
    Dog();
    Dog(std::string inName);
    Dog(int inAge);
    Dog(std::string inName, int inAge);
    Dog(std::string inName, std::shared_ptr<Toy> inToy, int inAge);

    // getters
    std::string getName() const;
    std::string getToyName() const;

    // methods
    void getToy(const std::shared_ptr<Toy>& inToy);
    void dropToy();
};
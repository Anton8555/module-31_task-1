#include "dog.h"

Dog::Dog(std::string inName, std::shared_ptr<Toy> inToy, int inAge):
    name(inName), toy(inToy)
{
    if(inAge >=0 && inAge < 30)
        age = inAge;
}

Dog::Dog(std::string inName, int inAge):
    name(inName)
{
    if(inAge >=0 && inAge < 30)
        age = inAge;
}

Dog::Dog(): Dog("Snow", std::make_shared<Toy>("SomeToy"), 0) {};

Dog::Dog(std::string inName): Dog(inName, std::make_shared<Toy>("SomeToy"), 0) {};

Dog::Dog(int inAge): Dog("Snow", std::make_shared<Toy>("SomeToy"), inAge) {};

std::string Dog::getName() const
{
    return name;
}

void Dog::getToy(const std::shared_ptr<Toy>& inToy)
{
    if(toy == inToy) {
        std::cout << "I already have this toy." << std::endl;
    } else if(inToy.use_count() > 2) {
        std::cout << "Another dog is playing with this toy." << std::endl;
    } else {
        toy = inToy;
    }
}

std::string Dog::getToyName() const
{
    return toy->getName();
}

void Dog::dropToy()
{
    // removing references from local variables
    toy.reset();
    toy = NULL;
}
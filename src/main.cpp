#include <iostream>
#include <memory>
#include "toy.h"
#include "dog.h"


/*!
* @brief The dog takes the toy.
* @param dog the object of the dog that should take the toy.
* @param toy the object of the toy.
*/
void DogTakesToy(std::shared_ptr<Dog> dog, std::shared_ptr<Toy> toy)
{
    std::cout << "Dog '" << dog->getName() << "' takes toy '" << toy->getName() << "'." << std::endl;
    dog->getToy(toy);
}

/*!
* @brief Throw the toy on the floor.
* @param dog the dog's object, which is to throw the toy.
*/
void ThrowToyOnFloor(std::shared_ptr<Dog> dog)
{
    std::cout << "Dog '" << dog->getName() << "' throws toy '" << dog->getToyName() << "' on the floor." << std::endl;
    dog->dropToy();
}

int main()
{
    //---------------------------------------------------------------------
    // creating objects

    // a toy
    std::shared_ptr<Toy> ball = std::make_shared<Toy>("Ball");

    // dogs
    std::shared_ptr<Dog> a = std::make_shared<Dog>("Sharik", 10);
    std::shared_ptr<Dog> b = std::make_shared<Dog>("Drushok", 11);

    //---------------------------------------------------------------------
    // running through the methods

    // The 1st dog picks up a toy
    DogTakesToy(a, ball);
    // The 1st dog makes an attempt to pick up the toy again
    DogTakesToy(a, ball);
    // The 2nd dog makes an attempt to pick up a toy
    DogTakesToy(b, ball);
    // The 1st dog throws a toy
    ThrowToyOnFloor(a);
    // The 2nd dog picks up a toy
    DogTakesToy(b, ball);
    
    //---------------------------------------------------------------------
    // program shutdown

    std::cout
        << std::endl
        << "The end of the program execution." << std::endl;
    return 0;
}

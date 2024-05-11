#pragma once

#include <iostream>
#include <string>

class Toy {
private:
   std::string name;

public:
    // constructor
   Toy(const std::string& inName);

   // destructor
   ~Toy();

   // getter
   std::string getName() const;
};

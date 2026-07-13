#include <iostream>
#include "function.hpp"

  int main(){

    int age;
    std::string name;
  
    std::cout << "Enter ur name: ";
    std::getline(std::cin, name);

    std::cout << "Enter ur age: ";
    std::cin >> age;

    id(name, age);
    
    return 0;
  }

#include <iostream>

 std::string name;

 
  void moneky(std::string name){
  
     for (int i = 0; i < 6; i++) {
       for (int j = 0; j < 6; j++) {
    
       std::cout << name << ' ';
      }
       std::cout << '\n';
    }
  }

  int main(){

     std::cout << "Enter ur name: ";
     std::cin >> name;

      moneky(name);

   return 0;
 }

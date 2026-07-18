#include <iostream>

int main(){

   std::string cars[5];
   int size = size(cars)/size(cars[0]);
   std::string temp;

   for (int  i = 0; i < size; i++) {
     
     std::cout << "Enter ur fav cars, press 'q' to quit # ";
     std::getline(std::cin, temp);

      if (temp == "q") {
        break;
      }
     
      else {
         cars[i] = temp;
      }
 }
    std::cout << "Ur fav cars are" << '\n';

    for (int i = 0; i < !cars[i].empty(); i++) {
      std::cout << cars[i] << '\n';
    }

  return 0;
}

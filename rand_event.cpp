#include <iostream>
#include <ctime>

int main(){

  srand(time(0));

  int RandNum = rand() % 3;
   
  switch(RandNum){
    case 0 : std::cout << "YOU LOSE!";
             break;
    case 1 : std::cout << "YOU WON A PENCIL";
             break;
    case 2 : std::cout << "YOU WON A T-SHIRT";
             break;
    case 3 : std::cout << "YOU WON A CINEMA TICKET!";
             break;
  }
  return 0;
}


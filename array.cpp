#include <iostream>

 int main(){

  //the array food itself will sho its address instead of whats inside
  //specify with [] to get stored values, the firt one start with 0 then up and beyond
  //all items inside an arry must be the same data type

    std::string food[] = {"Burger", "Pizza", "Toast"}; 
    
    std::cout << food << '\n';
    std::cout << food[0] << '\n';
    std::cout << food[1] << '\n';
    std::cout << food[2] << '\n' << '\n';

   //OR declear after

    std::string game[3];

    game[0] = "TIC TAC TOE";
    game[1] = "Snake";
    game[2] = "Hide and Seek";

    std::cout << game[0] << '\n';
    std::cout << game[1] << '\n';
    std::cout << game[2] << '\n';

  return 0;
}

#include <iostream>
#include <string>

  int main(){

    std::string games[] = {"COD", "Minecraft", "DeadCells", "FC24"};

      for (int i = 0; i < sizeof(games) / sizeof(std::string); i++) {
        std::cout << games[i] << '\n';
      }
    return 0;
  }

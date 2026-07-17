#include<iostream>

int main(){
  
  const int banana = 150;

  std::string monkeys[banana];

  std::fill(monkeys, monkeys + (banana/3),"George");
  std::fill(monkeys + (banana/3), monkeys + (banana/3)*3,"Abu");
  std::fill(monkeys + (banana/3)*2, monkeys + banana,"Rafiki");

    for(std::string monkey: monkeys)
      std::cout << monkey << '\n';

  return 0;
}

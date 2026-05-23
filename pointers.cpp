#include <iostream>

int main(){

  std::string name = "Sam";
  std::string *pName =  &name;

  int grade = 12;
  int *pGrade = &grade;
    
    std::cout << pGrade << '\n';
    std::cout << *pGrade << '\n';
    std::cout << pName << '\n';
    std::cout << *pName << '\n';

  return 0;
}


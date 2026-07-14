/*#include <iostream>
  
    //THIS IS  MY MISTAKE//

 void arry(std::string food[], int size)
 {
   int total = 0;
    
    for (int i = 0; i < size; i++) {
      total += food[i];

    }

 }

  int main(){

        std::string food[] = {"Burger", "Pizza", "Toast"};
        int size = sizeof(food) / sizeof(std::string);
        std::string fav = arry(food[], size);

        std::cout << "These are my favourite foods: " << fav;

     return 0;
  }
*/
#include <iostream>

std::string arry(std::string food[], int size)
{
    std::string result;
    for (int i = 0; i < size; i++) {
        result += food[i];
        if (i != size - 1) result += ", ";
    }
    return result;
}

int main(){
    std::string food[] = {"Burger", "Pizza", "Toast"};
    int size = sizeof(food) / sizeof(std::string);
    std::string fav = arry(food, size);
    std::cout << "These are my favourite foods: " << fav;
    return 0;
}

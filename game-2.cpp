#include <iostream>

 void enemydamage(float playerhealth){
   playerhealth  -= 15;
   std::cout << playerhealth << '\n';
 }
 
 void  playerheal(double playerhealth){
   playerhealth  += 20;
   std::cout << playerhealth << '\n';
 }

  int main() {

    float playerhealth = 100;
    float enemyhealth = 50;
   
    enemydamage(playerhealth);
    playerheal(playerhealth);

  return 0;
}

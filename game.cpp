#include <iostream>

void playerhealing(float *playerhealth){

    *playerhealth +=10;
  }

void EnemyAttack(float *playerhealth){

    *playerhealth -=15;
  }

  int main(){

     float playerhealth = 100;
     playerhealing(playerhealth);

    return 0;
  }

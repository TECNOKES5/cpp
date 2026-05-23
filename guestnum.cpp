#include <iostream>
#include <ctime>

 int num;
 int guess;
 int tries;
 
 int main(){
 srand(time(NULL));
     int num = (rand()% 100) +1;

   std::cout << "*****GUESS_THE_NUMBER*****\n";

      do {
        std::cout << "Enter a number 1 to 100: ";
        std::cin >> guess;
        tries++;


       if (guess > num) {
         std::cout << "Too High\n";
       }

       else if(guess < num) {
         std::cout << "Too Low\n";
       }

       else {
         std::cout << "Correct # Tries: " << tries << '\n';
       }
      } while(guess != num);
        std::cout << "Enter a number 1 to 100 ";
        std::cin >> guess;
       
   std::cout << "**************************\n";

  return 0;
  }

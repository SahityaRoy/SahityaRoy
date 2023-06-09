#include<simplecpp>

main_program{
   turtleSim();
   repeat(10){
     forward(10);
     penUp();
     forward(10);
     penDown();
    }
   wait(1000);
}

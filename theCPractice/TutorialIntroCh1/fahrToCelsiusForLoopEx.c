#include <stdio.h>
// Exercise 1-5 
// fahr to celsius table with For loop example
// prints out in from 300 F to 0 F 

int main() {

  int fahr;

  for (fahr = 300; fahr >= 0; fahr -= 20) {
    printf("-%3d %6.2f-\n", fahr, (5.0/9.0)*(fahr-32.0));
  }
}

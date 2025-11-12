#include <stdio.h>

// print fahr table tp celsius with float

int main() {
  
  float fahr, celsius;
  float lower, max, step;

  lower = 0;
  max = 300;
  step = 20;

  fahr = lower;
  while (fahr <= max) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("-%3.0f  -%6.2f\n", fahr, celsius);
    fahr += step;
  }
  
}

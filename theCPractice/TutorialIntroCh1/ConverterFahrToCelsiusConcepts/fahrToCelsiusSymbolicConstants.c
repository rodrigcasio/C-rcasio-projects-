#include <stdio.h>

// -- Symbolic constants 
#define LOWER 0
#define MAX 300
#define STEP 20

int main() {

  int fahr;
  
  for (fahr = LOWER; fahr <= MAX; fahr = fahr + STEP) {
    printf("-%3d -%6.2f\n", fahr, (5.0/9.0)*(fahr - 32));
  }

}

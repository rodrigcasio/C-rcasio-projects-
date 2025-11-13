#include <stdio.h>

/* count lines in input  (V2 {using for loop})*/ 

int main() {
  
  int c, nl;

  for (nl = 0; (c = getchar()) != EOF;) {
    if (c == '\n') {
      printf("-new line placed-\n");
      ++nl;
    }
  }

  printf("Number of lines: %2d\n", nl);

  return 0;
}

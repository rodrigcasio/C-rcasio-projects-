#include <stdio.h>

/* count lines in input  (V1)*/ 


int main() {
  
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;

  printf("Number of new lines: %2d\n", nl);


  return 0;
}

#include <stdio.h>

/* Exercise 1-12 Write a program that prints its input one word per line */

#define IN 1    // inside word 
#define OUT 0   // outside word

int main() {

  int c, state;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }

    } else {
      putchar(c);
      state = IN;
    }
  }

  return 0;
}

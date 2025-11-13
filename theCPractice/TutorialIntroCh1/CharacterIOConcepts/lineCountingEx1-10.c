#include <stdio.h>

/* Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backlash by \\.
 * This makes tabs and backspaces visible in an unambiguous way 
*/

int main() {

  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t'){
      printf("\\t");
    } else if (c == '\b') {
      printf("\\b");
    } else if (c == '\t') {
      printf("\\\\");
    }
  }

  return 0;
}

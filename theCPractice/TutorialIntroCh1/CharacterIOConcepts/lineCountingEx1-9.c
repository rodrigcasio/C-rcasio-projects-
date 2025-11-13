#include <stdio.h>

int main() {

  int c, lastChar;
  lastChar = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && lastChar == ' ') {
      ; // does nothing
    } else {
      putchar(c);
    }
    
    lastChar = c;
  }

  return 0;
}


/* 1-9 Write a program to copy its input to its output, replacing each string as of one or more blanks by a single blank 
 *
 *  c = current character being processed
 *  lastChar = the character from the previous iteration
 * 
 *  ex:
 *  input: asd asd    asd   asd  
 *  output: asd asd asd asd 
 *
 */ 

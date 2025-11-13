#include <stdio.h>

/* 1.8 exercise, write a program to count blanks, tabs, and newlines */

int main() {

  int c, nl, bl, tb;

  nl = 0;
  bl = 0;
  tb = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      printf("(newline placed)\n"); // debug line

      ++nl;
    } else if (c == '\t') {
      printf("(tab placed)\n");

      ++tb;
    } else if (c == ' ') {
      printf("(black placed)\n");

      ++bl;
    }
  }

  printf("# tabs: %d, newlines: %d, blanks: %d\n", tb, nl, bl);

  return 0;
}

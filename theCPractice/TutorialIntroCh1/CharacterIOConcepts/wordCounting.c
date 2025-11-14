#include <stdio.h>
/* 1.5.4 Word counting, porgram that counts lines, words and character in input 
 * with the loose definition that a word is a any sequence of characters
 * that does not contain a blank, tab or newline.
 */

#define IN 1
#define OUT 2

int main() {

  int c, nw, nl, nc, state;
  
  state = OUT;
  nw = nl = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("# newline: %d, words: %d, characters: %d\n", nl, nw, nc);


  return 0;
}

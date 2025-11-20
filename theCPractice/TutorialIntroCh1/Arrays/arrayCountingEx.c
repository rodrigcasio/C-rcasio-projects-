#include <stdio.h>

/* counts digits, white spaces, others 
 *  - counts how many times the digits from 1-9 are placed as input, the white spaces and other types of character
 *  - the count for the digits are in the array 
 *  - ndigit[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
 *    each user input is a character  0-9 that has a decimal value 
 *    '0' = 48, '1' = 49 , '2' = 50 .....
 *
 *  if input is 2 .. ++ndigit[c - '0'] = counts 1 time for the index = '2'(50)-'0'(48) =  ++ndigit[2]
 */ 

int main() {

  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;

  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c - '0'];
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite;
    } else {
      ++nother;
    }
  }

  printf("digits: ");
  for (i = 0; i < 10; ++i) {
    printf("-%d", ndigit[i]);
  }
  printf(", # white spaces: %d, other: %d\n", nwhite, nother);

  return 0;
}

#include <stdio.h>
// the C programming language 
// Exercise 1-6
// verify that "getchar() != EOF" is either 0 or 1.

// if the input is a character,  result evaluate to 1 (true)
// if the input placed by the user is Ctrl + D, result will be evaluated to 0 (false)

// Exercise 1-7 the value of EOF = -1
int main(){

    int result;

    printf("type a character and press Enter: ");
    result = getchar() != EOF;
    printf("the result is: %d\n", result);

    printf("Now try pressing Ctrl + D (or Ctrl+ Z) and Enter: ");
    result = getchar() != EOF;
    printf("the result is: %d\n", result);

    printf("The value of \'EFO\': %d", EOF);

    return 0;
}

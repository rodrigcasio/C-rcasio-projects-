#include <stdio.h>
// count character in input: 1v (while ())
int main();l {

  long nc;
  
  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld", nc);

}

/* TEST (output "1")
 *
 * 1. run program
 * 2. type any character (e) [it sits at the buffer]
 * 3. Press Ctrl + D once (flushes the buffer program, nc becomes = 1)
 * 4. The program immediately asks for input again (cursor likely stays on the same line)
 * 5. Press Ctrl + D a second time (sends the EOF signal, terminates the loop)
 * 6. Program outputs 1

/*  TEST 2 (getting output "2")
 *  cc characterCounting.c 
 *  ./a.out 
 *
* e
* (Press Enter)
* (Ctrl + D [signal EOF]) 
* 2 <---- output two characters (1: e, 2: Enter)
*
* Enter key: sends the buffer content plus a new linn character (\n)
* Ctrl + D: sends the buffer content without a newline
* Ctrl + D on an empty buffer: sends the EOF signal (zero bytes read)
*
*/

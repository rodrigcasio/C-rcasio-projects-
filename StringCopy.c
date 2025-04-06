#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src);
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
 
 //creating a new string with the same amount of characters
 char dstString[] = "Im excited to learn more about how C language works, lets go";

 // or to create an string with the same size as "srcString" we can do this: 
 //char dstString[sizeof(srcString)]

  copy(dstString, srcString);

  printf("%s", dstString);
 
 return 0;
}

void copy( char* dst, char* src){
  //loop until the end of the source string
  while(*src != '\0'){
    //copy characters from src to dst
    *dst = *src;
    //move to the next character 
    src++;
    dst++;
  }
  //add null terminator at the end of the dst. 
  *dst = '\0';
}


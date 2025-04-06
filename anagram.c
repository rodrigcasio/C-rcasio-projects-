#include <stdio.h>
#include <string.h>

int main(){
//by rodcasio

  //counters 
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  //strings 
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdadd";
  char s2[] = "dbb cccccaacb cdbababdcdcdab dcdadd";

  //flag
  int flag = 0;

  // storing length of the strings into variables for the loops.
  int lengthString1 = strlen(s1);
  int lengthString2 = strlen(s2);


  for(int i = 0; i < lengthString1; i++){
    if(s1[i] == 'a'){
      counter1[0] += 1;
    }
    else if(s1[i] == 'b'){
      counter1[1] += 1;
    }
    else if(s1[i] == 'c'){
      counter1[2] += 1;
    }
    else if(s1[i] == 'd'){
      counter1[3] += 1;
    }
  }

  for(int i = 0; i < lengthString2; i++){
    if(s2[i] == 'a'){
      counter2[0] += 1;
    }
    else if(s2[i] == 'b'){
      counter2[1] += 1;
    }
    else if(s2[i] == 'c'){
      counter2[2] += 1;
    }
    else if(s2[i] == 'd'){
      counter2[3] += 1;
    }
  }

  for(int i = 0; i < sizeof(counter1)/ sizeof(counter1[0]); i++){
    if(counter1[i] != counter2[i]){
      flag = 1;
      break;
    }
  }

  if(flag == 0){
    printf("Anagram!\n");
  }
  else{
    printf("Not Anagram!\n");
  }

  return 0;
}

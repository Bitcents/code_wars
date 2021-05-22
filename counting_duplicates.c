#include <stddef.h>
#include <stdio.h>

size_t duplicate_count(const char *text) {

  //  <----  hajime!
 
  int characters[128] = {0};
  int index = 0;
  while(text[index] != '\0'){
    int a = text[index];
    characters[a] += 1;
    index++;
  }
  int count = 0;
  
  for(int i=0; i<91; i++){
    count += ((i<65)*(characters[i] > 1 ) + (i>64)*(characters[i]+characters[i+32] > 1));
  }
  return count;

}
#include <stdio.h>

void rot13(char* str)
{
 //Code
  while(*str){
    
    int a = *str;
    if(a > 64 && a < 91){
      a += 13;
      a -= (a > 90)*26;
    } else if (a > 96 && a < 123){
      a += 13;
      a -= (a > 122)*26;
    }
    *str = a;
    *str++;
  }
}
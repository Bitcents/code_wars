#include <stdbool.h>

bool scramble(const char *str1, const char *str2)
{
  /* solution here */
  bool is_valid = true;
  int check_hash_table[26] = {0};
  int test_hash_table[26]  = {0};
  int index = 0;
  
  while(str2[index] != '\0'){
    check_hash_table[str2[index]-97]++;
    index++;
  }
  index = 0;
  while(str1[index] != '\0'){
    test_hash_table[str1[index]-97]++;
    index++;
  }
  
  for(int i=0; i<26; i++){
    if(test_hash_table[i] < check_hash_table[i]){
      is_valid = false;
      break;
    }
  }
  
  return is_valid;
}
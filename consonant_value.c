int solve(const char* strin) {
  char *vowels = "aeiou";
  int solution = 0;
  int current = 0;
  char *c;
  while(c = *strin++) {
    current = strchr(vowels, c) ? 0 : current + c - 96;
    if(current > solution) solution = current;
  }
  return solution;
}
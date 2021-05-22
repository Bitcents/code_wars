typedef unsigned long long ull;

unsigned long long* productFib(ull prod) {
  // your code
  ull i = 1;
  ull j = 1;
  ull temp;
  
  while(i*j < prod){
    temp = i;
    i = j;
    j = j + temp;
  }
  
  ull *fib_nums = malloc(sizeof(unsigned long long)*3);
  fib_nums[0] = i;
  fib_nums[1] = j;
  fib_nums[2] = 0;
  
  if(i*j == prod){
    fib_nums[2] = 1;
  }
  
  return fib_nums;
}
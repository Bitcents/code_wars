#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

double absol(double a){
  return (a < 0)*(-1)*(a) + (a >= 0)*a;
}

char* iterPi(double epsilon) {
  /*thought process: calculate pi for one iteration
    find the difference between provided constant and calculated pi
    repeat until difference is smaller than epsilon
  */  
  double pi_calc = 0;
  int iter = 0;
  
  while (absol(M_PI - pi_calc*4) >= epsilon){
    iter++;
    double denom = (iter*2) - 1;
    if(iter%2 != 0) pi_calc += 1/denom;
    else pi_calc -= 1/denom;
  }
  
  char* result = malloc(sizeof(char)*25);
  snprintf(result, 25, "[%d, %.10lf]", iter, pi_calc*4);
  return result;
}
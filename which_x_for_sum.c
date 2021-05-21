#include <math.h>

double solve(double m)
{
    double solution;
    double sqrt_determinant = sqrt(4*m + 1);
    double b = 2*m + 1;
    solution = (b - sqrt_determinant)/(2*m);
    return solution;
}

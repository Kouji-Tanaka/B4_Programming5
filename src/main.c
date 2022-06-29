#include <stdio.h>
#include <math.h>
#include "../include/sub.h"

#define N 1e6
#define D_MIN 1e-3
    
int main(void)
{
    double d_1,  d_2;
    
    d_1 = sigma_1(N)-log(2);
    printf("(1)\t%s\n", (fabs(d_1) <= D_MIN) ? "True":"False");
    
    d_2 = sigma_2(N)-(M_PI/4);
    printf("(2)\t%s\n", (fabs(d_2) <= D_MIN) ? "True":"False");
    
    return 0;
}
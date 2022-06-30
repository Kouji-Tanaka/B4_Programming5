#include "../include/sub.h"
    
double sigma_1(double n)
{
    double result,result_old,d;
    
    result = 0.0;
    result_old = 0.0;
    for(int m=1; m<=n; m++)
    {
        result += pow(-1, m-1)/m;
        d = result - result_old;
        result_old = result;
    }
    
    return result;
}

double sigma_2(double n)
{
    double result,result_old,d;
    
    result = 0.0;
    result_old = 0.0;
    for(int m=0; m<=n; m++)
    {
        result += pow(-1, m)/(2*m+1);
        d = result - result_old;
        result_old = result;
    }
    
    return result;
}

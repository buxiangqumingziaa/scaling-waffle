#include <stdio.h>
#include <math.h>
int main()
{  
    int n=10;
    float r=0.07,p;
    p=pow(1+r,n);
    printf("%.6f",p);
    return 0;
}
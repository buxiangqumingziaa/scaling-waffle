#include <stdio.h>
#include <math.h>
int main()
{
    int d=300000,p=6000;
    float r=0.01,m;
    m=log10(p/(p-d*r))/log10(1+r);
    int x=(int)(m*100);
    if(x%10>=5)x=x-x%10+10;
    else x=x-x%10;
    m=x/100.0;
    printf("%.1f",m);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    const double pi=acos(-1);   //声明pi
   
    double e=1.0,n=1.0;  //计算e
    int i=1; 
    while(1/n>1e-10)
    {
        e+=1/n;
        i++;
        n=i*n;
    }

    double x,y,a,b,c,d,f;
    scanf("%lf%lf",&x,&y);
    a=sin(x*pi/180);
    b=cos(x*pi/180);
    c=fabs(x);
    d=pow(e,x);    f=pow(x,y);
    printf("sin(x):%.6lf\ncos(x):%.6lf\n|x|:%.6lf\ne的x次方:%.6lf\nx的y次方:%.6lf",a,b,c,d,f);
    return 0;
}
#include <stdio.h>
#include <math.h>
// #define P(a,b,c,d) a*c*b*pow(1+b,c)/(pow(1+b,d)-1)-a
// #define P(a,b,c,d) (d+1)*a*b/2
#define P(a,b,c,d) a/c+(a-(a/c)*(d-1))*b
int main()
{
    int a,c,d;float b,p;
    scanf("%d%f%d%d",&a,&b,&c,&d);
    printf("%d\n%f\n%d\n%d\n",a,b,c,d);    
    p=P(a,b,c,d);
    printf("%.2f",p);
    return 0;
}
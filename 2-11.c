#include <stdio.h>
#include <math.h>
int main()
{
    float num,de;
    int i,d;
    scanf("%f",&num);
    printf("sign:%c\n",num>0?'+':'-');
    i=abs((int)num);
    d=abs((int)(num*1000));
    de=(d%1000)/1000.0;
    printf("integral part:%d\ndecimal fraction part:%.6f",i,de);
    return 0;
}
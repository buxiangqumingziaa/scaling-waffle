#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    int i=1;
    scanf("%lf",&num);
    float f[i];
    int g[4]={100,1000,10000,100000};
    for (i=0;i<=4;i++)
    {  
        int a=(int)(num*g[i]);  //a是乘倍数后的
        int x=a%10;  //x是个位
        f[i]=x>=5?a-x+10:a-x;
        f[i]=f[i]/pow(10,i+2);
    }
    printf("%.1f\n%.2f\n%.3f\n%.4f",f[0],f[1],f[2],f[3]);
    return 0;
}
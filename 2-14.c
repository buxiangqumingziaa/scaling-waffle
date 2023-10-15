#include <stdio.h>
void f(float x,float *y,int z);
int main()
{
    float a,b,c,d,num=100.453627;
    f(num,&a,100);     printf("%.1f\n",a);
    f(num,&b,1000);    printf("%.2f\n",b);
    f(num,&c,10000);     printf("%.3f\n",c);
    f(num,&d,1000000);    printf("%.4f\n",d);
    return 0;    
}

void f(float x,float *y,int z)     //x是原始数字，y是处理后的，z是每个对应乘的倍数
{
    float b=x*z;      //x先扩大到需要处理的数字变成个位(保留一位小数就要乘100)
    int a=(int)x%10;       //把个位赋给a
    b-=a;      //把个位变成0
    a=a>=5?10:0;        //个位四舍五入成10或0
    *y=b+a;        //把个位加上去
    *y/=z;      //除以倍数恢复原来的小数点位置      
}
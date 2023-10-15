#include <stdio.h>
int main()
#define Repay(n) p/m+(p-al)*rate//定义公式
{
    
    
    float p,m,n,rate,al=0; //声明变量
    scanf("%f %f %f %f",&p,&rate,&m,&n);//输入

    float x=Repay(n);
    
    for (int i=1;i<n;i++)
    {
        al=al+300000/12;//计算
        printf("%f\n",Repay(n));
        x=Repay(n);
    }
    printf("%f\n",Repay(n));//输出

    // printf("%f\n",Repay(n)); 

    return 0;
}
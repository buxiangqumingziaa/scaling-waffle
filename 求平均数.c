#include <stdio.h>  //求10个数的平均值
int main()
{
    //数组
    int arr[10];

    //输入
    int i=0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    //计算
    int sum;
    float average;
    for ( i = 0; i < 10; i++)
    {
        sum=sum+arr[i];
    }
    average=sum/10;

    //输出
    printf("平均数=%.1f\n",average);
    return 0;
}

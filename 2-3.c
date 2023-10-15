#include <stdio.h>
void cha(float *x,float y,int *z);
int main()
{
    int money,i,j,a=0,b=0,c=0;
    float price,change;
    scanf("%d %f",&money,&price);
    price=price-0.0000021;
    change=money-price;
    int h[6]={100,50,10,5,2,1};
    for ( i = 0; i < 6; i++)
    {
        j=0;
        while (change>=h[i])
        {
            change=change-h[i];
            j=j+1;
        }
    printf("%d元:%d ",h[i],j);
    }
    cha(&change,0.1,&a);
    cha(&change,0.05,&b);
    cha(&change,0.01,&c);
    printf("1角:%d 5分:%d 1分:%d",a,b,c);
    return 0;
}

void cha(float *x,float y,int *z)
{
    while(*x>=y)
    {
        *x=*x-y;
        *z=*z+1;
    }
}
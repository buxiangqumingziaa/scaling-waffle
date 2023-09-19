#include <stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("%d和%d中较大的是%d\n",a,b,c);
    return 0;
}

int max(int x,int y)
{
    int z;
    if(x>y)z=x;
    else z=y;
    return(z);
}
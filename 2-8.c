#include <stdio.h>
int main()
{
    int m,y=0,d;
    scanf("%d",&m);
    d=m<=24*60?1:m/(24*60)+1;
    while(d>=365)
    {
        d=d-365;
        y++;
    }
    printf("%d年%d天",y,d);
    return 0;
}
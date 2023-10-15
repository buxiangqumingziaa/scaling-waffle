#include <stdio.h>
int main()
{
    int h,m,y;
    float bmr,n;
    char g;
    scanf("%d%d%d %c",&h,&m,&y,&g);
    if (g!=77) bmr=655+(4.3*m*2.2)+(4.7*h*0.39)-(4.7*y);
    else bmr=66+(6.3*m*2.2)+(12.9*h*0.39)-(6.8*y);
    n=bmr/230;
    printf("您需要消耗%.2f块巧克力。",n);
    return 0;
}
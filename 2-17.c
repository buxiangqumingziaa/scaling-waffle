#include <stdio.h>
int main()
{
    const float r1=0.0036,r2=0.0225,r3=0.0198;
    float p1,p2,p3;
    int money;
    scanf("%d",&money);
    p1=money*(1+r1);
    p2=money*(1+r2);
    p3=money*(1+r3/2)*(1+r3/2);
    printf("p1=%.6f\np2=%.6f\np3=%.6f",p1,p2,p3);
    return 0;
}
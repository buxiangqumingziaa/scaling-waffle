#include <stdio.h>
int main()
{
    int m,t1,t2;
    float q;
    scanf("%d%d%d",&m,&t1,&t2);
    q=m*(t2-t1)*4184;
    printf("%.2f焦耳",q);
    return 0;
}
#include <stdio.h>
int main()
{
    long num;
    int a,b,c;
    scanf("%ld",&num);
    a=num%1000;
    b=num/1000%1000;
    c=num/1000000%1000;
    printf("%d %d %d",a,b,c);
    return 0;
}
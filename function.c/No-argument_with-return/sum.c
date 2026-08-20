#include<stdio.h>

int add()
{
    int a,b,c;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    printf("sum=%d\n",add());
    return 0;
}
#include<stdio.h>

int sub()
{
    int a,b,c;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("sub=%d",c);
}
int main()
{
    int a,b;
    sub();
    return 0;
}
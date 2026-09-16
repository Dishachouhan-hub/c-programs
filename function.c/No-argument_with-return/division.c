#include<stdio.h>

int div()
{
    int a,b,c;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    c=a/b;
    return c;
}
int main()
{
    printf("division=%d",div());
    return 0;
}
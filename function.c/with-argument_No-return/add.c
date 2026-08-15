#include<stdio.h>

int add(int a, int b)
{
    int c;
    c=a+b;
    printf("sum=%d\n",c);
}
int main()
{
    int a,b;
    printf("enter the no.\n");
    scanf("%d%d",&a,&b);
    add(a,b);
    add(67,3);
    return 0;
}
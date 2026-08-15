#include<stdio.h>

int multi()
{
    int x,y,z;
    printf("enter the no.");
    scanf("%d%d",&x,&y);
    z=x*y;
    printf("multiply=%d\n",z);
}
int main()
{
    int x,y;
    multi();
    multi();  //can call function many times;
    return 0;
}
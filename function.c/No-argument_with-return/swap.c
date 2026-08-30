#include<stdio.h>

int swap()
{
    int a,b,temp;
    printf("enter the no.");
    scanf("%d",&a);
    printf("enter the no.");
    scanf("%d",&b);
    //swapping logic;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
int main()
{
    swap();
    return 0;
}
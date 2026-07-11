#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter second no.");
    scanf("%d",&b);
    //swapping logic;
    temp=a;
    a=b;
    b= temp;
    {
        printf("\n swapping:\n");
        printf("a=%d\n",a);
        printf("b=%d\n",b);
    }
    return 0;
}
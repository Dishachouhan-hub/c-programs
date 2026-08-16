#include<stdio.h>

int swap(int ,int );
int swap(int a, int b)
{
    int temp;    //temporary variable;
    //swapping logic;
    temp=a;
    a=b;
    b=temp;
    printf("\n swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
int main()
{
    int a,b;
    printf("enter the no.");
    scanf("%d",&a);
    printf("enter the no.");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}

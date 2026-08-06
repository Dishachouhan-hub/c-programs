#include<stdio.h>

int main()
{
    int i,a[5];
    printf("enter the elements of array");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("display elements of array\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
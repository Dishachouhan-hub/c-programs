#include<stdio.h>

int main()
{
    int i,a[5],b[5],c[5];
    printf("enter elements of first array:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of second array:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("display addition of two array:\n");
    for(i=0;i<=4;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
    return 0;
}
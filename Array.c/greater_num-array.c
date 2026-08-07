#include<stdio.h>

int main()
{
    int i,a[10],max;
    printf("enter the elements of array");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("greater element =%d",max);
    return 0;
}
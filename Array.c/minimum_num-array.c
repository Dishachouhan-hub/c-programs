#include<stdio.h>

int main()
{
    int i,a[6],min;
    printf("enter elements of array\n");
    for(i=0;i<=5;i++)
    {
       scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<=5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("smaller element=%d",min);
    return 0;
}
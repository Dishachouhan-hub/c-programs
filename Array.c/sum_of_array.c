#include<stdio.h>

int main()
{
    int i,a[5],sum=0;
    printf("enter the no.");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
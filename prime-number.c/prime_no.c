#include<stdio.h>

int main()
{
    int i,n,p=0;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p<2)
    {
        printf("it is prime no.");
    }
    else
    {
        printf("it is not a prime no.");
    }
    return 0;

}
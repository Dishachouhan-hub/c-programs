#include<stdio.h>

int main()
{
    int i,n,f=1;
    printf("enter the fact no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f=f*i;
    {
        printf("factorial=%d",f);
    }
    return 0;
}
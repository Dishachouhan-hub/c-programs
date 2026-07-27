#include<stdio.h>

int main()
{
    int i,n,f=1;
    printf("enter the factorial no.");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("fact=%d",f);
    return 0;
}
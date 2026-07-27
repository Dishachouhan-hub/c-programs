#include<stdio.h>

int main()
{
    int i,n,f=0;
    printf("enter the no.");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=f+i;
        i++;
    }
    printf("%d",f);
    return 0;
}

#include<stdio.h>

int main()
{
    int i=1,n,f=1;
        printf("enter the no.");
        scanf("%d",&n);
    do
    {
        f=f*i;
        i++;
    }  
    while(i<=n);
    printf("%d",f);
    return 0;
}
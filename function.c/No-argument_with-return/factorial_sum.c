#include<stdio.h>

int sum()
{
    int i,n,f=0;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f+i;
    }
    return f;
}
int main()
{
    printf("factorial=%d\n",sum());
    return 0;
}
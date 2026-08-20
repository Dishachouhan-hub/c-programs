#include<stdio.h>

int fact(int i, int n)
{
    int f=0;
    for(i=1;i<=n;i++)
    {
        f=f+i;
    }
    printf("factorial=%d\n",f);
}
int main()
{
    int i,n;
    printf("enter the no.");
    scanf("%d",&n);
    fact(i,n);
    return 0;
}

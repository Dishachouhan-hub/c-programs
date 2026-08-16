#include<stdio.h>

int factorial(int i, int n)
{
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("fact=%d\n",f);
}
int main()
{
    int i,n;
    printf("enter the no.");
    scanf("%d",&n);
    factorial(i,n);
    return 0;
}

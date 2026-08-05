#include<stdio.h>

int main()
{
    int i,n,s=0,r;    //r=reverse;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=n;n>0;n=n/10)
    {
    r=n%10;
    s=s*10+r;
    }
    if(i==s)
    {
        printf("no. is palindrome");
    }
    else
    {
        printf("not a palindrome no.");
    } 
    return 0;
    
}
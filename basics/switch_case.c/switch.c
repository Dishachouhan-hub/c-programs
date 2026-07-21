#include<stdio.h>

int main()
{
    int a,b,c,ch;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    printf("enter your choice");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        {
            c=a+b;
            printf("sum=%d",c);
            break ;
        }
        case 2:
        {
            c=a-b;
            printf("sub=%d",c);
            break;
        }
        case 3:
        {
            c=a*b;
            printf("multi=%d",c);
            break;
        }
        default:
        {
            printf("invalid choice");
            break;
        }
    }
    return 0;
}
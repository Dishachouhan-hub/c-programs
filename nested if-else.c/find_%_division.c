#include<stdio.h>

int main()
{
    int p;
    printf("enter the percentage");
    scanf("%d",&p);
    if(p>60)
    {
        printf("first division");
    }
    else
    {
        if(p>45)
        {
            printf("second division");
        }
    else
    {
        if(p>33)
        {
            printf("pass");
        }
        else
        {
            printf("fail");
        }
    }
    }
    return 0;
}
#include<stdio.h>

int cube(int);
int cube(int area)
{
    int volume;
    volume = area*area*area;
    printf("volume=%d\n",volume);
}
int main()
{
    int area;
    printf("enter the area");
    scanf("%d",&area);
    cube(area);
    return 0;
}
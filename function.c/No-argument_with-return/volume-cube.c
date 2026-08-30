#include<stdio.h>

int cube()
{
    int area,volume;
    printf("enter the area");
    scanf("%d",&area);
    volume = area*area*area;
    return volume;
}
int main()
{
    printf("volume=%d",cube());
    return 0;
}
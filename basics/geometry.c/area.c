#include<stdio.h>

int main()
{
    float pie=3.14, area , radius;
    printf("enter the radius");
    scanf("%f",&radius);
    area= pie*radius*radius;
    {
        printf("area=%f",area);
    }
    return 0;
}
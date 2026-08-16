#include<stdio.h>

int circle(float,float);
int circle(float pie,float radius)
{
    float area;
    area = pie*radius*radius;
    printf("area=%f\n",area);
}
int main()
{
    float pie=3.14,radius;
    printf("enter the radius");
    scanf("%f",&radius);
    circle(pie,radius);
    return 0;
}
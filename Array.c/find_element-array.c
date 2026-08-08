#include<stdio.h>

int main()
{
    int i,a[8],tosearch,foundindex=-1;
    printf("enter the elements of array:\n");
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search\n");
    scanf("%d",&tosearch);
    for(i=0;i<=7;i++)
    if(a[i]==tosearch)
    {
        foundindex=i;
        break;
    }    
    if(foundindex==-1)
    {
        printf("element is not found");
    }
    else
    {
        printf("element is found at index %d",foundindex);
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int i,j,a[3][3];
    printf("enter the matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display transpose of matrix:\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n ");
    }
    return 0;
}
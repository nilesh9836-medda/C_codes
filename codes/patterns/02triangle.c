#include <stdio.h>

int main()
{
    int row;
    printf("\nEnter the number of rows: ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int k=row-i;k>0;k--)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
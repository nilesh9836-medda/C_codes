#include<stdio.h>

int main()
{
    int s,e;
    printf("\nEnter starting point and ending point of the Odd Numbers list: ");
    scanf("%d%d",&s,&e);
    if (s<e)
    {
        printf("\nThe Odd Numbers List from %d to %d:\n",s,e);
        for(int i=s;i<=e;i++)
            if (i%2 != 0)
                printf("\t%d",i);
    }
    else
        printf("\nInvalid Inputs!!!\n");

    return 0;
}
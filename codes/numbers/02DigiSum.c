#include <stdio.h>

int main()
{
    int n,num=0,sum=0,d=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        d=num%10;
        sum+=d;
        num=num/10;
    }
    printf("The sum of all digits in %d is %d",n,sum);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch;
    int n1,n2;
    float r;
    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);
    printf("**************Welcome**************\nEnter + to sum\nEnter - to subtract\nEnter * to product\nEnter / to divide\n");
    scanf(" %c", &ch);
    // printf(" %c\n",ch);

    switch(ch){
        case '+':
        {
            r=(float)n1+n2;
            break;
        }
        case '-':
        {
            r=(float)n1-n2;
            break;
        }
        case '*':
        {
            r=(float)n1*n2;
            break;
        }
        case '/':
        {
            if(n2!=0)
                r=(float)n1/n2;
            else
                printf("ERROR!!!!\n");
            break;
        }
        default :
            {
                printf("Try again and Choose option carefully!\n");
                exit(1);
            }
    }
    printf("\nRESULT:\n%d%c%d=%.3f\n",n1,ch,n2,r);

    return 0;
}
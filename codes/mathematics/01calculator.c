#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch;
    float n1,n2;
    float r=0;
    printf("Enter two numbers:\n");
    scanf("%f%f",&n1,&n2);
    printf("**************Welcome**************\nEnter + to sum\nEnter - to subtract\nEnter * to product\nEnter / to divide\n");
    scanf(" %c", &ch);
    // printf(" %c\n",ch);

    switch(ch){
        case '+':
        {
            r=n1+n2;
            break;
        }
        case '-':
        {
            r=n1-n2;
            break;
        }
        case '*':
        {
            r=n1*n2;
            break;
        }
        case '/':
        {
            if(n2!=0)
                r=n1/n2;
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
    printf("\nRESULT:\n%.2f%c%.2f=%.3f\n",n1,ch,n2,r);

    return 0;
}
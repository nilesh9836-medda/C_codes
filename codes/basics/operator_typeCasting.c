#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%.2f\n",a,b,a+b,a,b,a-b,a,b,a*b,a,b,(float)a/b); // Operators: +,-,*,/
        // type casting: change data type, (float)a/b -> change the result of division from Integer to Floating point data type
        // %.2f is floating point format specifier. '.2' specifies that exactly two digit after the decimal point

    return 0;
}
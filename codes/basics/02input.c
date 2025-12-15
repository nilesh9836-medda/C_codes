#include<stdio.h>

int main() {
    int a;
    float b;
    char c;

    printf("Enter an integer, a float, and a character: ");
    scanf("%d %f %c", &a, &b, &c);

    printf("You entered:\n");
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);

    return 0;
}
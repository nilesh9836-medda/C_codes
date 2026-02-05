/*

Unary Operators: Operators that work on single operand.
Example: Increment( ++ ) , Decrement( -- )
Binary Operators: Operators that work on two operands.
Example: Addition ( + ), Subtraction( - ) , Multiplication ( * )
Ternary Operators: Operators that work on three operands.
Example: Conditional Operator( ? : )

*/

#include<stdio.h>
int main() {
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);

	// Arithmetic operators are used to perform arithmetic/mathematical operations on operands
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n", a--);

	// Relational Operators in C are used for the comparison of the two operands
	printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b : %d\n", a != b);

	//Logical Operator are used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration.
	printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a: %d\n", !a);

	// Bitwise operators are used to perform bit-level operations on the operands.
	printf("\nBitwise OR operation of a and b =%d",a|b);
	printf("\nBitwise AND operation of a and b =%d",a&b);
	printf("\nBitwise Exclusive OR operation of a and b =%d",a^b);
	printf("\nBitwise NOT operation of a =%d",~a);
	printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);

	// Assignment Operators are used to assign value to a variable
	printf("a = b: %d\n", a = b);
    printf("a += b: %d\n", a += b);
    printf("a -= b: %d\n", a -= b);
    printf("a *= b: %d\n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %%= b: %d\n", a %= b);
    printf("a &= b: %d\n", a &= b);
    printf("a |= b: %d\n", a |= b);
    printf("a ^= b: %d\n", a ^= b);
    printf("a >>= b: %d\n", a >>= b);
    printf("a <<= b: %d\n", a <<= b);

	// Other Operators
	
	// Basically, the sizeof the operator is used to compute the size of the variable or datatype.
	// The comma operator has the lowest precedence of any C operator. It can act as both operator and separator.
	// The conditional operator is the only ternary operator in C. It is a conditional operator that we can use in place of if..else statements.
	// The dot operator is applied to the actual object.
	// The arrow operator is used with a pointer to an object.
	// Casting operators convert one data type to another. For example, int(2.2000) would return 2.
	// Addressof operator & returns the address of a variable.
	// The dereference operator * is a pointer to a variable. For example *var; will pointer to a variable var.

	int* add_of_num = &a;

    printf("sizeof(a) = %d bytes\n", sizeof(a));
    printf("&a = %p\n", &a);
    printf("*add_of_num = %d\n", *add_of_num);
    printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);
    printf("(float)num = %f\n", (float)a);

	return 0;
}

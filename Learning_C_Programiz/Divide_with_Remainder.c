#include <stdio.h>

int divideWithRemainder() {
	int num1, num2, quotient, remainder;

	printf("Enter two Integers: ");
	scanf_s("%d %d", &num1, &num2);
	quotient = num1 / num2;
	remainder = num1 % num2;

	printf("%d / %d = %d rest %d", num1, num2, quotient, remainder);

	return 0;
}
#include <stdio.h>

int multiplyFloats() {
	float num1;
	float num2;
	float product;

	printf("Enter two floats: ");
	scanf_s("%f %f", &num1, &num2);
	product = num1 * num2;
	printf("%f + %f = %f", num1, num2, product);

	return 0;
}
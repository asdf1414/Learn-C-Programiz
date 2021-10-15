#include <stdio.h>

int factorial() {
	int num;
	unsigned long long factorial = 1;

	printf("Enter an Integer: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; ++i) {
		factorial *= i;
	}

	printf("The factorial of %d is %llu", num, factorial);

	return 0;
}
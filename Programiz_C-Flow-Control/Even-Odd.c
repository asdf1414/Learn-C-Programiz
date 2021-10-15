#include <stdio.h>

int evenOdd() {
	int num = 0;

	printf("Enter an Integer: ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("The number %d is even", num);
	}
	else if (num % 2 == 1) {
		printf("The number %d is odd", num);
	}

	return 0;
}
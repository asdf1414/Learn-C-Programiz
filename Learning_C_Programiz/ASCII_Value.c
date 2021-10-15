#include <stdio.h>

int asciiValue() {
	char chr;

	printf("Enter char: ");
	scanf_s("%c", &chr);
	printf("Your chars ASCII Value is: %d", chr);

	return 0;
}
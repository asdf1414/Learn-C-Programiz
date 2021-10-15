#include <stdio.h>

int charIsAlphabet() {
	char chr;

	printf("Enter char: ");
	scanf_s("%c", &chr);


	if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')) {
		printf("The char %c is an alphabet", chr);
	}
	else {
		printf("The char %c is not an alphabet", chr);
	}

	return 0;
}
#include <stdio.h>
#include <ctype.h>

int vowel() {
	char chr;
	
	printf("Enter a char: ", &chr);
	scanf_s("%c", &chr);

	chr = tolower(chr);
	if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u') {
		printf("The char %c is a vowel!", chr);
	}
	else {
		printf("The char %c is a consonant", chr);
	}
}
#include <stdio.h>

int leapYear() {
	int year = 0;

	printf("Enter a year to be checked: ");
	scanf_s("%d", &year);

	if (year % 400 == 0) {
		printf("The year %d is a leap year!", year);
	}
	else if(year % 100 == 0) {
		printf("The year %d is not a leap year", year);
	}
	else if (year % 4 == 0) {
		printf("The year %d is a leap year!", year);
	}
	else {
		printf("The year %d is not a leap year", year);
	}

	return 0;
}
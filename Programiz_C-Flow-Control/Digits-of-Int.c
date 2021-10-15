#include <stdio.h>
#include <stdlib.h>

int digitsOfInt() {
	long long num, comparator = 10;
	int ctr = 1, negative = 0;

	printf("Enter Integer to count digits: ");
	scanf_s("%llu", &num);
	num = abs(num);

	while(num >= comparator) {
		ctr += 1;
		comparator *= 10;
	}

	printf("The Integer %llu has %d digit(s)", num, ctr);

	return 0;
}
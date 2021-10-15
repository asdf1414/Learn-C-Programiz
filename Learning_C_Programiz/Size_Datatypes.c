#include <stdio.h>

int sizeDatatypes() {
	int a;
	float b;
	double c;
	char d;

	printf("Size of int: %d\n", sizeof(a));
	printf("Size of float: %d\n", sizeof(b));
	printf("Size of double: %d\n", sizeof(c));
	printf("Size of char: %d\n", sizeof(d));

	return 0;
}
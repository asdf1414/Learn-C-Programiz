#include <stdio.h>

int calcHCF() {
	int t1, t2;

	printf("Enter two Integers to calculate HCF: ");
	scanf_s("%d %d", &t1, &t2);

	int oldT1 = t1, oldT2 = t2;
	while (t1 != t2) {
		if (t1 > t2) {
			t1 -= t2;
		}
		else {
			t2 -= t1;
		}
	}

	printf("The highest common factor of %d & %d is %d", oldT1, oldT2, t1);

	return 0;
}
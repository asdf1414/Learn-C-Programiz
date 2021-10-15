#include <stdio.h>

int largestNumber() {
	int numArr[3];

	printf("Enter 3 Integers: ");
	scanf_s("%d %d %d", &numArr[0], &numArr[1], &numArr[2]);

	int numerator = sizeof(numArr) / sizeof(numArr[0]);
	int max = numArr[0];

	for (int i = 0; i < numerator; ++i) {
		if (numArr[i] > max) {
			max = numArr[i];
		}
	}

	printf("The largest number in the array is: %d", max);

	return 0;
}
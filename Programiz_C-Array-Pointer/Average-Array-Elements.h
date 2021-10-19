#include <stdio.h>

void calcAverageOfArrayElements() {
	int amount;
	float nums[100], sum = 0.0;

	printf("Enter number of elements: ");
	scanf_s("%d", &amount);
	
	while (amount > 100 || amount < 1) {
		printf("The amount of numbers must not exceed 100.");
		printf("Enter amount again: ");
		scanf_s("%d", &amount);
	}

	for (int i = 0; i < amount; ++i) {
		printf("Enter number: ");
		scanf_s("%f", &nums[i]);
		sum += nums[i];
	}

	printf("The sum of all numbers is: %f", sum);
}
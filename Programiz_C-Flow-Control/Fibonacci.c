#include <stdio.h>

int fibonacci() {
	int highest;

	printf("Enter upper limit for fibonaccis sequence: ");
	scanf_s("%d", &highest);

	int t1 = 0, t2 = 1, next;

	printf("Fibonacci sequence: %d, %d, ", t1, t2);
	while (1) {
		next = t1 + t2;
		if (next > highest) break;

		printf("%d, ", next);

		t1 = t2;
		t2 = next;
	}

	return 0;
}
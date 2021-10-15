#include <stdio.h>
#include <math.h>

int rootsQuadraticEquasion() {
	double a, b, c;
	double root1, root2, discriminator, denominator, realPart, imagPart;

	printf("Enter the coefficients a, b and c (a != 0): ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	if (a == 0.0) {
		printf("Error: The coefficient \'a\' can't be 0!");
		return 0;
	}

	discriminator = b * b - 4 * a * c;
	denominator = 2 * a;

	if (discriminator > 0) {
		root1 = (-b + sqrt(discriminator)) / denominator;
		root2 = (-b + sqrt(discriminator)) / denominator;
		printf("root1 = %f ; root2 = %f", root1, root2);
	}
	else if (discriminator == 0) {
		root1 = root2 = -b / denominator;
		printf("root = %f", root1);
	}
	else if (discriminator < 0) {
		realPart = -b / denominator;
		imagPart = sqrt(-discriminator) / denominator;
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
	}

	return 0;
}
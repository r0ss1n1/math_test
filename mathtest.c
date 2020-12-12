#include <stdio.h>
#include <math.h>


int main(void) {
	char choice;
	printf("Library for testing math.h functions\n");
	printf("1 for the sine function, 2 for the cosine function, 3 for the tangent function\n");
	printf("4 for the hyperbolic sine, 5 for the hyperbolic cosine, 6 for the hyperbolic tangent\n");
	printf("7 for the exponential function, 8 for the logarithmic function, 9 for the logarithmic\n");
	printf("function (base 10), 10 for the modulus function, 11 for the absolute value function\n");
	printf("12 for the square root function, 13 for the power function, 14 for the second modulus\n");
	printf("function. Authored by Charles Truscott, github.com/r0ss1n1 as a means for testing machine\n");
	printf("libraries\n");
	scanf("%d", &choice);
	double value;
	if (choice == 1) {
		printf("Enter the value of the sine function to interpret (floating-point)\t");
		scanf("%lf", &value);
		printf("The sine of %lf is %lf\n\n", value, sin(value));
	} else if (choice == 2) {
		printf("Enter the value of the cosine function to interpret (floating-point)\t");
		scanf("%lf", &value);
		printf("The cosine of %lf is %lf\n\n", value, cos(value));
	} else if (choice == 3) {
		printf("Enter the value of the tangent function to interpret (floating-point)\t");
		scanf("%lf", &value);
		printf("The tangent of %lf is %lf\n\n", value, tan(value));
	} else if (choice == 4) {
		printf("Enter the value of the hyperbolic sine function to interpret (floating-point)\t");
		scanf("%lf", &value);
		printf("The hyperbolic sine of %lf is %lf\n\n", value, sinh(value));
	} else if (choice == 5) {
		printf("Enter the value of the hyperbolic cosine function to interpret (floating-point)\t");
		scanf("%lf", &value);
		printf("The hyperbolic cosine of %lf is %lf\n\n", value, cosh(value));
	} else if (choice == 6) {
		printf("Enter the value of the hyperbolic tangent function to interpret (floating-point)\t");
		scanf("%lf", &value);
		printf("The hyperbolic tangent of %lf is %lf\n\n", value, tanh(value));
	} else if (choice == 7) {
		printf("Enter the exponent to take to base 'e'\t");
		scanf("%lf", &value);
		printf("e to the power %lf is %lf\n\n", value, exp(value));
	} else if (choice == 8) {
		printf("Enter the value to take the logarithm of\t");
		scanf("%lf", &value);
		printf("The logarithm of %lf is %lf\n\n", value, log(value));
	} else if (choice == 9) {
		printf("Enter the value to take the logarithm of (base 10)\t");
		scanf("%lf", &value);
		printf("%lf log10 is %lf\n\n", value, log10(value));
	} else if (choice == 10) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 11) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 12) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 13) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 14) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 15) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 16) {
		printf("");
		scanf("%lf", &value);
	} else if (choice == 17) {
		printf("");
		scanf("%lf", &value);
	} else {
		printf("Incorrect option, select from one to seventeen\n");
		exit(1);
	}

	return 0;
}
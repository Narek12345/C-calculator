#include <stdio.h>

int a;
int b;
int sum(int, int);
int sub(int, int);
int mul(int, int);
double div(double, double);

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

double div(double a, double b)
{
	return a / b;
}

int main(void)
{
	printf("\nEnter the first number: ");
	scanf("%i", &a);
	printf("Enter the second number: ");
	scanf("%i", &b);


	printf("\nSum: %i\n", sum(a, b));
	printf("Sub: %i\n", sub(a, b));
	printf("Mul: %i\n", mul(a, b));
	printf("Div: %lf\n", div(a, b));

	return 0;
}
#include <stdio.h>

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
	printf("Sum: %i\n", sum(5, 7));
	printf("Sub: %i\n", sub(5, 7));
	printf("Mul: %i\n", mul(5, 7));
	printf("Div: %lf\n", div(5, 7));

	return 0;
}
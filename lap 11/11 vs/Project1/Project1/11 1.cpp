#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSum(float a, float b)
{
	float result;
	result = a + b;
	printf("a + b = %.2f\n", result);
}
int main()
{
	float a, b;
	printf("Input a: ");
	scanf("%f", &a);
	printf("Input b: ");
	scanf("%f", &b);
	printSum(a, b);
	return 0;
}
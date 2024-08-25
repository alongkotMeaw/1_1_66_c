#include <stdio.h>
#include <math.h>
void printSum(float a, float b)
{
	float result;
	result = a + b;
	printf("a + b = %.2f\n", result);
}

//printLog(float a,float b) 1.2
void printLog(float a, float b) {
	printf("%f", log10(a) / log10(b));
}

//printSquare(float x) 1.3
void printSquare(float x) {
	printf("%f", x * x);
}

//printFact(int n) 1.4
void printFact(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("%d", sum);
}


int main()
{
	float a, b;
	printf("Input a: ");
	scanf("%f", &a);
	printf("Input b: ");
	scanf("%f", &b);
	printSum(a, b);
	printLog(a, b);
	printf("\n");
	printSquare(2);
	printf("\n");
	printFact(2);
	return 0;
}

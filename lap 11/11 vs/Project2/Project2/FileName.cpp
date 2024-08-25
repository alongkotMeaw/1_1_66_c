#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Spure(int h);

int main() {

	int a, b, c, x, l;
	printf("Enter a,b,c,x :");
	scanf("%d%d%d%d", &a, &b, &c, &x);
	l = Spure(x);
	printf("The value of polynomial expression is : %d", a * l + b * x + c);

}

int Spure(int h) {
	return h * h;
}
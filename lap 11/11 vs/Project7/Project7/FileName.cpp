#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//Dis
float Distance(int x1, int y1, int x2, int y2) {
	float dis;
	dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	return dis;
}

int main()
{
	int x1, x2, y1, y2, x3, y3;
	float a, b, c;

	//input
	printf("x1,y1 = ");
	scanf("%d%d", &x1, &y1);
	printf("x2,y2 = ");
	scanf("%d%d", &x2, &y2);
	printf("x3,y3 = ");
	scanf("%d%d", &x3, &y3);

	//as a b c
	a = Distance(x1, y1, x2, y2);
	b = Distance(x2, y2, x3, y3);
	c = Distance(x1, y1, x3, y3);

	//out a b c
	printf("side a = %.2f\n", a);
	printf("side b = %.2f\n", b);
	printf("side c = %.2f\n", c);

	if (a != b && a != c && b != c) {
		int a1, b1, c1;
		//check 90
		a1 = sqrt(pow((b), 2) + pow((c), 2));
		b1 = sqrt(pow((a), 2) + pow((c), 2));
		c1 = sqrt(pow((a), 2) + pow((b), 2));
		if (a == a1 || b == b1 || c == c1)
			printf("This is the scalene triangle and also rectangle triangle");
		else
			printf("This is the scalene triangle");
	}
	else
		printf("This is the isosceles triangle");




	return 0;
}
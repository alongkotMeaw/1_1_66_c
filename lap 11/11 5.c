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
	int x1, x2, y1, y2;

	//input
	printf("x1,y1 = ");
	scanf("%d%d", &x1, &y1);
	printf("x2,y2 = ");
	scanf("%d%d", &x2, &y2);

	//out
	printf("d = %.3f", Distance(x1, y1, x2, y2));




	return 0;
}

#include <stdio.h>
int Fact(int x) {
	int sum = 1;
	for (int i = 1; i <= x; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	printf("1!/1+2!/2+3!/3+4!/4+5!/5 = %d", Fact(1) / 1 + Fact(2) / 2 + Fact(3) / 3 + Fact(4) / 4 + Fact(5) / 5);
	return 0;
}

#include <stdio.h>
int Fact(int x) {
	int sum = 1;
	for (int i = 1; i <= x; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	char Select;
	int n, r, v = 0;
	for(;;) {

		//menu
		printf("======= MEnu =======\n");
		printf("p or P: Permutation\n");
		printf("c or C: Combination\n");
		printf("q or Q: Exit program\n");

		//input Select
		printf("Select choice : ");
		scanf(" %c", &Select);

		// Q break
		if(Select == 'q' || Select == 'Q') break;

		//input n r
		printf("Enter n:");
		scanf("%d", &n);
		printf("Enter r:");
		scanf("%d", &r);


		// P
		if (Select == 'p' || Select == 'P') {
			int f, s, k;
			k = n - r;
			f = Fact(n);
			s = Fact(k);

			printf("P(%d,%d) = %d\n", n, r, f / s);
		}

		// C
		if (Select == 'c' || Select == 'C') {
			int f, s, k, j, w;
			k = n - r;
			f = Fact(n);
			s = Fact(k);
			j = Fact(r);
			w = f / (s * j);
			printf("C(%d,%d) = %d\n", n, r, w);
		}
	}


	return 0;
}

#include <stdio.h>
int main()
{
	int m;
	printf("M=");
	scanf("%d", &m);
	int ary[m][m],bay[m][m],count = 0;
	printf("Aray A\n");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++)
				scanf("%d", &ary[i][j]);
		}
		printf("Aray B\n");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++)
				scanf("%d", &bay[i][j]);
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++)
				if (ary[i][j] != bay[i][j])
					count++;
		}
		if (count == 0)
			printf("Y");
		else
			printf("N");
	return 0;
}

#include <stdio.h>
int main()
{
	int m;
	printf("M=");
	scanf("%d", &m);
	int ary[m][m],bay[m][m],count = 0;
		//asgin a
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++)
				scanf("%d", &ary[i][j]);
		}
		//asgin b
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++)
				bay[i][j] = ary[j][i];
		}

		//check
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++)
				if (ary[i][j] != bay[i][j])
					count++;
		}
		//output
		printf("Transpose of A:\n");
		//out B
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
                printf("%d",bay[i][j]);
                printf(" ");
			}
            printf("\n");
		}

		if (count == 0)
			printf("A is Symmrtric Matrix");
		else
			printf("A is not Symmrtric Matrix");
	return 0;
}

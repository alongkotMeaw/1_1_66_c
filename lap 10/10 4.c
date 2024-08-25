#include <stdio.h>
int main()
{
    int ary[3][3],bay[3][3],C[3][3];
    srand((unsigned) time(NULL));

       //asgin ary
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
				 ary[i][j] = rand()%10+1;
		}

		//asgin b
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
				bay[i][j] = rand()%10 +1;
		}
		//              บังไม่ได้
		int p,x;
        for (int i = 0 ; i  < 3 ; i++){
             for (int j = 0; j < 3; j++){
                p = 0;
                for (x = 0 ; x < 3; x++){
                    p = p + ary[i][x] * bay[x][j];
                    }
              C[i][j] = p;
             }
        }
         //out a
         printf("Matrix A\n");
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
                printf("%d",ary[i][j]);
                printf(" ");
			}
            printf("\n");
		}
		 //out b
		 printf("Matrix B\n");
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
                printf("%d",bay[i][j]);
                printf(" ");
			}
            printf("\n");
		}
        //out c
        printf("Matrix c = A*B\n");
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
                printf("%d",C[i][j]);
                printf(" ");
			}
            printf("\n");
		}

        return 0;
}

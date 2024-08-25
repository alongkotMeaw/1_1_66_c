#include <stdio.h>
int main()
{
    srand((unsigned) time(NULL));
    int n;
    char cho;
    printf("Enter N = ");
    scanf("%d",&n);
    int ary[n][n];
    //asgin ary
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				 ary[i][j] = rand()%10;
		}

    //out ary
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
                printf("%d",ary[i][j]);
                printf(" ");
			}
            printf("\n");
		}

		printf("choose(R:row,C:col,D:Diagonal) to show:");
		scanf(" %c",&cho);
		// row
		if(cho == 'R'){ //r in should r-1
                printf("Enter row number(1-%d):",n);
                int row;
                scanf("%d",&row);
                for(int i = 0;i < n;i++){
                   printf("%d",ary[row-1][i]);
                   printf(" ");
                }
        }
        // col
        if(cho == 'C'){ //r in should r-1
                printf("Enter row number(1-%d):",n);
                int col;
                scanf("%d",&col);
                for(int i = 0;i < n;i++){
                   printf("%d",ary[i][col-1]);
                   printf("\n");
                }
        }
        //Diagonal
        int i;
        if(cho == 'D'){
                for(int i = 0;i < n;i++){

                   for(int j = 0;j < i;j++)
                    printf(" ");
                 printf("%d",ary[i][i]);
                printf("\n");
                }
        }




        return 0;
}

#include <stdio.h>
int main()
{
int a[2][5]={{10},{15}};
int i=0,j;
while (i < 2)
{
j=0;
while(j<5)
{
printf("%d ",a[i][j]);
j = j + 1;
}
printf("\n");
i = i + 1;
}
return 0;
}

#include <stdio.h>
int main()
{
int a[10]={1};
int i=0;
while (i < 10)
{
printf("a[%d]=%d\n", i,a[i]);
i = i + 1;
}
return 0;
}

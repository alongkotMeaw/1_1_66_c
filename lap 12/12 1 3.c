#include <stdio.h>
void Func1(int a, int b);
void Func2(int* a, int* b);

int main()
{
int x=5, y=4;
Func1(x,y);
printf("x = %d, y = %d\n",x,y);
Func2(&x,&y);
printf("x = %d, y = %d\n",x,y);
return 0;
}

void Func1(int a, int b)
{
a = a+b;
b = b+1;
}
void Func2(int* a, int* b)
{
*a = *a + *b;
*b = *b + 1;
}

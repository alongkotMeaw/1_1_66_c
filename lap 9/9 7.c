#include <stdio.h>
#include <string.h>
int main()
{
   char s1[200];
   int i;
   printf("Enter Sentence :");
   gets(s1);
   for(i = 0;i < (strlen(s1)+5);i++){
       printf("%c",s1[i]);
       if(s1[i-4] == 'h'&&s1[i-3] == 'a'&&s1[i-2] == 'p'&&s1[i-1] == 'p'&&s1[i] == 'y')
       printf(" :) ");
   }

    return 0;
}
//If u r happy, i am happy too. But although u r sad, i am not sad as u r, i will be more happy 555.


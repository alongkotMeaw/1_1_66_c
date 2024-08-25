#include <stdio.h>
#include <string.h>

int main()
{
   int i=1;
   char s1[10]="",s2[50]="";
   while(strcmp("end",s1) && strcmp("End",s1)){
        printf("word %d:",i);
        scanf("%s",s1);
        if(strcmp("end",s1) && strcmp("End",s1)){
            strcat(s2,s1);
            strcat(s2," ");
        }
        i++;
   }
   puts(s2);

    return 0;
}

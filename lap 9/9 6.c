#include <stdio.h>
#include <string.h>

int main(){
  int i,count = 1;
  char name[100];
  printf("Please enter sentence:");
  gets(name);
  //นับจำนวนคำ

  for(i =0;i < strlen(name) ;i++){

       if (name[i]==' '&&name[i+1]!=' '){
          count = count +1;
       }
    }

   printf("Number of character(including space) = %d\n",strlen(name));
   printf("Number of words = %d",count);

return 0;
}

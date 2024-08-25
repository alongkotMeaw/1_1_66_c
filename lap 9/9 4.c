#include <stdio.h>
#include <string.h>

int main(){
  char name[22] = "",name1[22] = "";
  printf("Enter sentence: ");
  scanf("%21[^\n]s",name);
  if(20 < strlen(name)){
     strncat(name1,name,20);
     printf("String shown back : %s...",name1);
  }else
  printf("String shown back : %s",name);
return 0;
}

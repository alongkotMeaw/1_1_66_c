#include <stdio.h>
#include <string.h>
int main() {
    typedef struct{
    char name[15];
    char sname[15];
    int age;
    char gender;
    } person;
    person p1 = {"Harry","Potter",20,'M'};
    person member[5] ={p1};
    /*printf("%s %s, %d years old.\n",member[0].name,member[0].sname,member[0].age);
   printf("Gender: %c\n",member[0].gender);*/
    for(int i = 1;i < 5; i++){
         printf("Enter name:");
         scanf("%s",member[i].name);
         scanf("%s",member[i].sname);
         printf("Enter age:");
         scanf("%d",&member[i].age);
         printf("Enter gender:");
         scanf(" %c",&member[i].gender);
    }
return 0;
}

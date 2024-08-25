#include <stdio.h>
#include <string.h>
int main() {
    typedef struct{
    char name[15];
    char sname[15];
    int age;
    char gender;
    } person;
    person p1; ///Enter name:Ron Wisley
//Enter age:21
//Enter gender
   printf("Enter name:");
   scanf("%s",p1.name);
   scanf("%s",p1.sname);
   printf("Enter age:");
   scanf("%d",&p1.age);
   printf("Enter gender:");
   scanf(" %c",&p1.gender);

   printf("%s %s, %d years old.\n",p1.name,p1.sname,p1.age);
   printf("Gender: %c\n",p1.gender);
return 0;
}

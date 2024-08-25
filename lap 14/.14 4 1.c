#include <stdio.h>
#include <string.h>
int main() {
    typedef struct{
    char name[15];4
    char sname[15];
    int age;
    char gender;
    } person;
   // person p1;
   person p1 ={"Harry",                  //1
               "Potter",                 //2
                20,                      //3
                'M'};                    //4
   printf("%s %s, %d years old.\n",p1.name,p1.sname,p1.age);
   printf("Gender: %c\n",p1.gender);
return 0;
}

#include <stdio.h>
#include <string.h>
 typedef struct{
    char name[15];
    char sname[15];
    int age;
    char gender;
    } person;

void printperson(person *p1){
    for(int i = 0;i < 5;i++){
        printf("%c.",p1[i].name[0]);
        printf("%s, ",p1[i].sname);
        printf("%d years old.\n",p1[i].age);
        printf("Gender: %c\n",p1[i].gender);
    }
}
int main() {
    person p1[5] = {{"Harry","Potter",20,'M'}
                   ,{"Ron","Wisley",21,'M'}
                   ,{"Jonh","Snown",35,'M'}
                   ,{"Arya","Stark",15,'F'}
                   ,{"Ariana","Grande",20,'M'}};
    printperson(p1);

return 0;
}

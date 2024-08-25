#include <stdio.h>
#include <string.h>
void findPerson();

typedef struct{
    char name[15];
    char sname[15];
    int age;
    char gender;
    } person;

int main() {
    person p1[5] = {{"Harry","Potter",20,'M'}
                   ,{"Ron","Wisley",21,'M'}
                   ,{"Jonh","Snown",35,'M'}
                   ,{"Arya","Stark",15,'F'}
                   ,{"Ariana","Grande",20,'M'}};

    findPerson(p1);

return 0;
}

void findPerson(person p1[]){
    int max = p1[0].age, min = p1[0].age;
    for(int i = 1;i < 5;i++){
        if(p1[i].age > max){
                max = p1[i].age;
        }else if(p1[i].age < min){
                min = p1[i].age;
        }

    }
    printf("max %d  min %d",max,min);
}

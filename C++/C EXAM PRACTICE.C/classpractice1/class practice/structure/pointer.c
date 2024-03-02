#include<stdio.h>
struct student
{
int id;
char name[20];
float perc;
};
void main(){
    struct student s1, *ptr;
    ptr=&s1;
printf("enter student id");
//scanf("%d", &ptr->id);
scanf("%d",&s1.id);
printf("enter student name");
scanf("%s", ptr->name);
printf("enter student percentage");
scanf("%f", &ptr->perc);
//printf("student id=%d\n", ptr->id);
printf("student id=%d\n", s1.id);
printf("student name=%s\n", ptr->name);
printf("student percentage=%g", ptr->perc);

}


#include<stdio.h>
void display(int, float);
struct student
{
int id;
float perc;
};
int main()
{
struct student s1;
printf("enter student id");
scanf("%d", &s1.id);
printf("enter student percentage");
scanf("%f", &s1.perc);
display(s1.id,s1.perc);
return 0;
}
void display(int a, float b)
{
printf("student id=%d\n", a);
printf("student percentage=%f",b);
}

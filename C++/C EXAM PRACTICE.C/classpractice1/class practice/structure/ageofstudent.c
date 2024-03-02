/*Write a C program to read information of student.
 It contains Name, Roll number, Birthday, admission date.
 Calculate age of student at the time of admission*/
 //age of student at the time of admission is 29 
 #include<stdio.h>
 struct DOA{
    int day;
    char month[20];
    int year;
 };
 struct DOB{
    int day;
    char month;
    int year;

 };
 struct student{
    int id;
    char name[30];
    struct DOA;
    struct DOB;

 };
 void main()
{
   struct student s[2];
   for(int i=0;i<2;i++){
   printf("Enter teh id: \n");
   scanf("%d",&s[i].id);
   printf("Enter teh name: \n");
   scanf("%s",s[i].name);
   printf("Enter your date of admission: \n");


   

   }
} 
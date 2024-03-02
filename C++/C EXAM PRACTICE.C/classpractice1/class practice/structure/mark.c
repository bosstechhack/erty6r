//WAP in C to store the marks of three subjects
//(subject1, subject2, subject3) using structure
// and find the subject wise total marks of three students
#include<stdio.h>
struct student{
int math;
int cp;
int english;
};
int main(){
    int mathsum=0,cpsum=0,englishsum=0;
    struct student s[3];
    for( int i=0;i < 3;i++){
    
    printf("Enter the marks in math of student  %d: " ,i+1);
    scanf("%d\n", &s[i].math);
    printf("Enter the marks in cp of student %d: " ,i+1);
    scanf("%d\n", &s[i].cp);
    printf("Enter the marks in english of student%d: ", i+1);
    scanf("%d\n", &s[i].english);
    mathsum += s[i].math;
    cpsum += s[i].cp;
    englishsum += s[i].english;


    }
    printf("Total marks in math %d\n",mathsum);
    printf("Total Marks in cp %d\n",cpsum);
    printf("Total Marks in english %d\n",englishsum);
    return 05;

}
   
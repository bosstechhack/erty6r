#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float perc;
};
void display(struct student *b){
   
        scanf("%s",b->name);
        scanf("%d",&b->roll);
        scanf("%f",&b->perc);

    
    return;
}
void main(){
    struct student s1;
    display(&s1);
   
        printf("%s\n",s1.name);
        printf("%d\n",s1.roll);
        printf("%f\n",s1.perc);

    return;
}
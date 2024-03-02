#include<stdio.h>
void main(){
    int m,e,c,p;
    printf("score of math ");
    scanf("%d",&m);
    printf("score of english ");
    scanf("%d",&e);
    printf("score of chemistry ");
    scanf("%d",&c);
    printf("score of physic ");
    scanf("%d",&p);
    
    float per = (m+c+e+p)/4;
    if(per>=80)
       printf("grad is A+");
    else if(per>=75)
       printf("grad is A ");
    else if(per>=60)
       printf("grad is B ");
    else if(per>=45)
        printf("grad is C ");
    else if(per>=35)
            printf("grad is  D ");
    else{
        printf("Fail");
    }




}
#include<stdio.h>
struct game{
    char name[30];
    int score;
};
void display(struct game p[3]){
    int sum=0;
    for( int i=0;i<3;i++){
      sum+=p[i].score;
    }
    float avg=sum/3;
    printf("The Avarage Score %g ",avg);
    return;

}

void main(){
    struct game p[3];
    for(int i=0;i<3;i++){
        printf("Enter the name of player\n");
        scanf("%s",p[i].name);
        printf("Enter the score ");
        scanf("%d",&p[i].score);
    }
    display(p);

}
#include<stdio.h>
float result(int* a , int* b, int* c){
    float avg = (*a + *b +*c)/3;
    
    return avg;
}

int main(){
    int o;
    printf("Enter '1' if first graduate? or  '0' if not graduate\n");
    scanf("%d",&o);
    if(o==0){
        printf("Candidate not Eligible For scholership\n");
    }
int p1,c1,m1;
printf("Enter the marks in physice: ");
scanf("%d",&p1);
printf("Enter the marks in chemistry: ");
scanf("%d",&c1);
printf("Enter the marks in math: ");
scanf("%d",&m1);
if(m1<0||c1<0||p1<0){
    printf("Invalid input ");
    return 0;
}
 float res=result(&p1,&c1,&m1);
 if(res>=98){
    printf("Candidate Qualified");
 }
 else{printf("Candidate not Qualified");}
return 0;
}
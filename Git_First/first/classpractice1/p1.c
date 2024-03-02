#include<stdio.h>
void evenodd(int a){
    if(a%2==0){
     printf("number is even");

    }
    else{ printf("number is odd");}
    return;
}




int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    evenodd(a);
    return 0;


}
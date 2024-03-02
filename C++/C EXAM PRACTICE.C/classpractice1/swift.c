#include<stdio.h>
int main(){
    int sum,sub,mul,div,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int option;
    scanf("%d",&option);
    switch(option){
        case 1 :{
            sum =a+b;
            printf("%d",sum);
            break;
        }
         case 2 :{
            sub =a-b;
            printf("%d",sub);
            break;
        }
        case 3 :{
            mul =a*b;
            printf("%d",mul);
            break;
        }
        case 4 :{
            div =a/b;
            printf("%d",div);
            break;
        }
        case 5 :{
            break;
        }
        

    }
    return 0;
}
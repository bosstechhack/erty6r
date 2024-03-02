#include<stdio.h>
int main(){
int a,b,c;
printf("enter the 3 numbers");
scanf("%d\n%d\n%d",&a,&b,&c);
if (a<b){
 if (a<c){
 printf("%d is a smallest",a);
 } else {
 printf( "%d is a smallest",c);
 }
} else {
if (b<c){
printf("%d is smallest",b);
} else{
printf("%d is a smallest",c);
}
}
return 0;
}

#include<stdio.h>
int main(){
int x,y;
scanf("%d\n%d",&x,&y);
if (x==y){
printf(" %d = %d",x,y);
}else if ( x>y){
printf("%d>%d",x,y);
}else{
printf("%d<%d",x,y);}
return 0;
}
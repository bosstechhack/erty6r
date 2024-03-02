#include<stdio.h>
int main() {
float a,b;
char op;
printf("enter the operetor(+,-,*)\n");
scanf("%c",&op);
printf("enter the two number\n");
scanf("%f\n%f",&a,&b);
switch(op){
case '+':{
printf("%.1f",a+b);
break;
}
case '-':{
printf("%.1f",a-b);
break;
}
case '*':{
printf("%.1f",a*b);
break;
}}
return 0;
}
#include<stdio.h>

int function()
{
  int d=5;
  static int e =5;  
d = d+5;
e = e+5;
printf("static:%d\n",e);
printf("normal:%d",d);

}
int main()
{
function();
printf("\n");
function();
printf("\n");
function();

}

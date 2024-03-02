#include<stdio.h>
int power(int n,int p);
int main()
{
    int n,p,result;

printf("enter the number and power ");
scanf("%d %d",&n, &p);
result=power(n,p);
printf("result = %d",result);
return 0;
}
int power(int m,int n)
{
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;
}
#include<stdio.h>
int main(){

int n,x,h,z;
printf("Enter the total distance need to  covered: ");
scanf("%d",&n);
printf("Enter the total distance covered in 1 hour: ");
scanf("%d",&x);
printf("Enter the hours in which he have to finished the race: ");
scanf("%d",&h);
z=(n-x)/(h-1);
printf("teh speed he have to maintain to finish the race :%d ",z);
return 0;
}
#include<stdio.h>
#include<string.h>
int main(){


 char arr1[30]="Ashish";
 char arr2[30];
 strcpy(arr2,arr1);
 printf("%s\n",arr2);
 strcat(arr2,arr1);
 printf("%s\n",arr2);
 strlwr(arr1);
 printf("%s\n",arr1);
 strupr(arr2);
 printf("%s\n",arr2);
 return 0;
}
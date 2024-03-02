//Frequency of a character in a String
#include<stdio.h>
#include<string.h>
int main(){


char a[200];
scanf("%[^\n]",a);
char n;
scanf(" %c",&n);//why to put space b/w " & c
int i=0,j=0;
while(a[i]!='\0'){
     if(a[i]==n){
       j++;
     }
     i++;
}
printf("%d",j);

return 0;
}
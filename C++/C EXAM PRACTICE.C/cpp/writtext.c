#include<stdio.h>
#include<stdlib.h>
void main(){
    int num;
    char b[100];
FILE *a;

// a=fopen("yourfile.txt","w");
// if(a == NULL){
//     printf("Error!");
//     exit(1);
// }
// printf("Enter num: ");
// scanf("%d",&num);
// fprintf(a,"%d",num);
// fclose(a);
if((a=fopen("yourfile.txt","r")) == NULL){
printf("Error ! opeming file");
exit(1);
}
fscanf(a,"%d",&num);
printf("Value of n=%d",num);
// fgets( b,100,a);
fscanf(a,"%s",b);
printf("value of b=%s",b);
fclose(a);


}
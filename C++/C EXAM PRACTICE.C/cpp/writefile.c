#include<stdio.h>
int main(){
FILE *fp;
char a[100],b[200];
fp=fopen("yourfile.txt","w");
printf("Enter string to erite in the file");
gets(a);
fputs(a,fp);
fclose(fp);
fp=fopen("yourfile.txt","r");
fgets(b,100,fp);
printf("Data from the file iis: ");
printf("%s",b);
return 0;
}
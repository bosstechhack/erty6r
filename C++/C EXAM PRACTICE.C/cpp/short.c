#include<stdio.h>
#include<string.h>
int main(){
    int n ,count=0, t=0;
    FILE *tp;
    printf("Enter the word to to replace: ");
    char s1[300];

    scanf("%s",s1);
    printf("Enter the new word");
    char s3[300];
    scanf(" %s",s3);
    char s2[3000];
    int length=strlen(s3);
    tp=fopen("yourfile.txt","r+");
    while(fscanf(tp,"%s",s2)==1){

       if(strcmp(s1,s2)==0){
        fseek(tp,-length,SEEK_CUR);
        fprintf(tp," %s",s3);
        fseek(tp,0,SEEK_CUR);
        count++;
       }
       t++;
    }
    printf("%d occurance of word '%s' replace with'%s'\n",count,s1,s3);
    printf("%d words checked in total\n",t);
    fclose(tp);
    return 0;
}
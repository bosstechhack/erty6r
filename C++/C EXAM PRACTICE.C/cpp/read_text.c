//modify this code to find 
#include<stdio.h>
#include<string.h>
int main(){
    FILE *tp;
    char s1[200];
    char s2[200];
    scanf(" %s",s1);
    char s3[20000];
    tp=fopen("yourfile.txt","r+");
    int count=0;

    int t=0;
    while(fgets(s3,sizeof(s3),tp)!=NULL){
        int i=0;
        int j;
      while(s3[i]!='\0'){
        j=0;
       
        while(s3[i]!=' '&&s3[i]!='\0'){
         s2[j]=s3[i];
         i++;
         j++;
        }
        s2[j]='\0';
        if(strcmp(s2,s1)==0){
            count++;
        }
       
        if(s3[i] ==' '){
           t++;
        }
        i++;
      }  
    }
    printf("%d\n",count);
    printf("%d",t);
    fclose(tp);
    return 0;
    
}

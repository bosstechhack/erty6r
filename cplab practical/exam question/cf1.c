#include<stdio.h>
#include<string.h>
int d[500];
int t=0;
int main(){
    int c;
    scanf("%d",&c);
    char a[5000];
    char b[5000];
    int count;
    for(int i=1;i<=c;i++){
        count = 0;

        scanf(" %s",a);
        scanf(" %s",b);
        if(a[0]!='0'&&b[0]!='0'&&a[strlen(a)-1]!='1'&&b[strlen(b)-1]!='1'){
            printf("NO");
            return 0;
        }
        if(strlen(a)!=strlen(b)){
           printf("NO");
           return 0;
        }
       
        int k=0;
        int c[5000];
        for(int i=0;i<strlen(a);i++){
            
            if(a[i]!=b[i]){
                count++;
                c[k]=i+1;
                 k++;
            }

        }
        int p=0; 
        for(int m=0;m<count;m++){
            
                
            
            if(c[m]+1==c[m+1]){
               printf("NO");
                
                return 0;

            }
            else if(b[c[m]-1]!=b[c[m]+1]){
                printf("NO");
                return 0;

                
            }
            else{
               printf("YES");
                return 0;
                }
            }    
                
         }

    
    
    return 0;
}
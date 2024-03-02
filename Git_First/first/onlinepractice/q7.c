#include<stdio.h>
#include<string.h>

int main(){
    char a[200];
    char b[200];
    scanf("%[^\n]",a);
    int i = strlen(a)-1;
    printf("%d\n",strlen(a));
    int temp;
    
    int j = 0;
    while(i >= 0){
        if(a[i] != ' '){
            b[j] = a[i];
            j++;
        }
        else {
            break;
        }
        i--;    
        }
        b[j]='\0';
        int k=strlen(b)-1;
       for(int i=0,j=k;i<j;i++,j--){
        temp=b[j];
        b[j]=b[i];
        b[i]=temp;
       }

          
    

    printf("%s",b);
    return 0;
}


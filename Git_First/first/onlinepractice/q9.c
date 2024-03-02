//write a programe to reverse the whole string without  using nested loop
#include<stdio.h>
#include<string.h>
void recall(char b[200])
{
    int k = strlen(b)-1;
    char temp;
    for(int i=0,j=k;i<j;i++,j--){
        temp=b[j];
        b[j]=b[i];
        b[i]=temp;
    }
    printf("%s ",b);
}
int main()
{
    char a[200];
    char b[200];
    scanf("%[^\n]", a);
    int i = strlen(a)-1;
    
    int j = 0;
    while(i >= 0){
        if(a[i] != ' ' && i !=0){
            b[j] = a[i];
            j++;
        }
        else if( a[i] == ' '|| i == 0) {
            if(i==0){
                printf("%c",a[0]);
            }
            b[j]='\0';   
            recall(b);
            j=0;
        }
        
        i--;
    }
        
         

    
    return 0;
}


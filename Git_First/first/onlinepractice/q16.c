//find unique element in the given set
#include<stdio.h>
#include<string.h>
int main(){
    int s;
    scanf("%d", &s);
    char a[s];
    scanf("%s", a);
    char b[100];
    int count = 0;
    int m = 0;
    for(int i = 0; i < s; i++){
        count=0;
        for(int j = i+1; j < s; j++){
            if(a[i] == a[j]){
                count = 1;
                break;
            }    
        }
        if(count == 0){
            b[m] = a[i];
            m++;
        }
    }
    b[m]='\0';
    printf("%s",b);
    // int c=0;
    // for(int i=0;i<m;i++){
    //     c = 0;
    //     for(int j = 0; j < s; j++){
    //         if(b[i] == a[j]){
    //             c++;
    //             printf("frequency of number %d ",b[i]);
    //             printf("is %d\n ",c);

    //         }
    //     }
    
    // }
  
    return 0;
}
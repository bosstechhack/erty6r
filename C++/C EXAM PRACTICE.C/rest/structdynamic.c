#include<stdio.h>
#include<stdlib.h>
struct records{
    char subject[100];
    int marks;

};
int main(){
    struct records *ptr;
    int n;
    scanf("%d",&n);
    ptr=(struct records*)malloc(n*sizeof(struct records));
    for(int i=0;i<n;i++){
        scanf("%s %d",(ptr+i)->subject,&(ptr+i)->marks);
    }
    for(int i=0;i<n;i++){
        printf("%s %d",(ptr+i)->subject,(ptr+i)->marks);
    }
    free(ptr);
    return 0;
}
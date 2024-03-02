
    #include<stdio.h>
void greeting(int n){
    printf("Good Morning\n");
    if(n==1) return;
     greeting(n-1);
     return;

   
}

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    greeting(n);

   
    return 0;
}

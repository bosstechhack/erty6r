
    #include<stdio.h>
int sum(int n){
    if(n==0)return 0;
     int s =n+sum(n-1);
    
   
    
     return s ;

   
}


int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
     int s=sum(n);
     printf("%d",s);
   
   
    return 0;
}


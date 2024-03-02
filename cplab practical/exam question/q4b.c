#include<stdio.h>

    unsigned int h(unsigned int n){
        if(n==0)
            return 0;
            else
            return h(n/2)+n%2;
        }
        int main(){

            unsigned int  sum =0,n,nmax;
            scanf("%d",&n);
            nmax=n+1;
            for(;n<nmax;++n)
               sum+=h(n);
               printf("sum=%u\n",sum);
               return 0;
        }
    
   

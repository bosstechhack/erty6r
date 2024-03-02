// An n * n matrix is called a positive Markov matrix if each element is positive 
//and the sum of the elements in each column is 1. Write a program that prompts 
//the user to enter a 3 * 3 matrix of double values and tests whether it is a Markov matrix or not.
#include<stdio.h>
#include<string.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    float a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%f",&a[i][j]);
        }
    }
float sum=0;
    int count=0;
    for(int k=0;k<c;k++){
        
        for(int m=0;m<r;m++){
            sum=sum+a[m][k];
        }
        if(sum==1){
            count++;
            
        } 
        sum=0;  
    }
    if(count==c){
        printf("markov matrix");
    }
    else if(count!=c)
    {printf("not markov");}
            return 0;
}
#include<stdio.h>
float temp[10];
int u=0;
float t;
float *appentmp(float x)
{
    temp[u]=x; 
    u++;
    return 0;
    }
    
float avgtmp(float brr[]){
    float sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+brr[i]; 
        }
    float avg=sum/10;

     return avg;
}
    

int main(){
   for(int i=0;i<10;i++){
    scanf("%f",&t);
     *appentmp(t);
     }
   float y= avgtmp(temp);
   printf("%f",y);
    return 0;
    }
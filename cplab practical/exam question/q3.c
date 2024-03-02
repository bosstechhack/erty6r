#include<stdio.h>
float temp[10];
int u =0;
float *appendTemp(float);
float avTmp(float arr[]);
int main()
{ float t,j,avg;
int i;
    
    for(i=0;i<10;i++)
    {printf("enter the temp of day %d = ",i+1);
        scanf("%f",&t);
        *appendTemp(t);
    }
    avg = avTmp(temp);
    printf("average temperatute %f",avg);
}
float *appendTemp(float t)
{
    
    temp[u]=t;
    u++;
    return 0;
}

float avTmp(float arr[])
{ 
    float sum =0,result;
    int i;
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
result = sum/10;
    return result;
}
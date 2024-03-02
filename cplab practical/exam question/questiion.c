#include<stdio.h>
int main(){
    float a[6][10];
    for(int i=0;i<6;i++){
        for(int j=0;j<10;j++){
            scanf("%f",&a[i][j]);
        }

    }
    float max;
    int j;
    for(int i=0;i<6;i++){
        for( j=0;j<10;j++){
            max=a[i][0];
            if(max<a[i][j]){
                max=a[i][j];
            }


        }
        printf("%fThe gratest markes in sunject s ",j);
        printf("%f\n",max);

    }
    return 0;
}
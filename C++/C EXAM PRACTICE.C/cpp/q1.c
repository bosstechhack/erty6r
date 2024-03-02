//write a programm to find 4 consecutive number in a row colun=mn and digonal
#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //for horizontal check
    int count=0;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c-3;j++){
            

            if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]&&a[i][j+2]==a[i][j+3]){
               printf("true"); 
               return 0;
            }
           
           
        }
    }
    //for vertical check
    for(int i=0;i<c;i++){
        
        for(int j=0;j<r-3;j++){
           
            if(a[j][i]==a[j+1][i]&&a[j+1][i]==a[j+2][i]&&a[j+2][i]==a[j+3][i]){
               printf("true");
               return 0; 
            }    
        }
    }
    //  for digonal check
    for (int i = 0; i < r - 3; i++) {
        for (int j = 0; j < c - 3; j++) {
            if (a[i][j] == a[i+1][j+1] && a[i][j] == a[i+2][j+2] && a[i][j] == a[i+3][j+3]) {
                printf("true");
                return 0;
            }
        }
    }

    // Diagonal check (top-right to bottom-left)
    for (int i = 0; i < r - 3; i++) {
        for (int j = c - 1; j >= 3; j--) {
            if (a[i][j] == a[i+1][j-1] && a[i][j] == a[i+2][j-2] && a[i][j] == a[i+3][j-3]) {
                printf("true");
                return 0;
            }
        }
    }
    printf("false");
    
    
    
  
       
       return 0;
    }
    
    
        


      
    
    
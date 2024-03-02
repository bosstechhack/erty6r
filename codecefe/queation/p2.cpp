#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int c,r,count=0;;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                r=i;c=j;
            }
        }
        cout<<endl;
    }
    while(r!=2 || c!=2){
        if(c<2 ){
            count++;
            c++;
        }
        else if(c>2){
            c--;
            count++;
        }
         if(r<2 ){
            count++;
            r++;
        }
        else if(r>2){
            r--;
            count++;
        }

    }
    cout<<count;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
   vector< vector<int>>v(r, vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int k;
            cin>>k;
            v[i][j]=k;
        }
    }
    int count=0;

    vector<int>v3;
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
          if(v[i][j]==1){
           break;
          }
          else{
            count=1;
          }
        }
        if(count==1){
            v3.push_back(i);

        }
    }
    int s=v3.size();
    if(s==0){
        cout<<"There is no celebrity"<<endl;
    }
    else{
        s-=1;
        int p=0;
        while(s!=-1){
            p=0;
            for(int i=0;i<r;i++){
                if(i!=v3[s]&&(v[i][v3[s]]==1||v[v3[s]][i]==0)){
                    p++;

                }
                
            }
            if(p==r-1){
            cout<<v3[s]+1<<"is celebrity"<<endl;}
            s--;

        }
    }
   

}
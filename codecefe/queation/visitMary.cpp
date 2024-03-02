#include<bits/stdc++.h>
using namespace std;

long long int gf(long long int x,long long int y){
    long long int temp=x;
      if(y%x!=0){
        while(x!=0){
             temp=x;
            x=y%x;
            y=temp;
            
        }
      }
return temp;

}
int main(){
    long long int n;
    cin>>n;
    while(n!=0){

    
    typedef long long int lli;
    lli x ,y;
    lli a,b;
    cin>>x>>y;
    lli M=max(x,y);
    lli m=min(x,y);
    lli G=gf(m,M);
    if(G==1){
        cout<<"1"<<endl;
        cout<<x<<" "<<y<<endl;
    }
    else {
        lli NG=0;
        cout<<"2"<<endl;
        bool found = false;
       for(int i=1;i<50;i++){
        for(int j=1;j<50;j++){
            lli X = x - i;
            lli Y = y - j;
           lli NM=max(X,Y);
           lli Nm=min(X,Y);
             NG=gf(Nm,NM);
            if(NG==1){
                double U=(j);
                double D=(i);
                double N=(U/D);
                lli kk=N;
                if(kk== N){
                    cout<<X<<" "<<Y<<endl;
                    cout<<x<<" "<<y<<endl;
                    found = true;
                    break;

                }
            }
        }
        if(found) break;
        
       }
        
    }
    n--;
    }
    return 0;

}
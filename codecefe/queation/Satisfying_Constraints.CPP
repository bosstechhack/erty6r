#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main(){
    lli n;
    cin>>n;
    lli K=0,k=0;
    while(n!=0){
    lli c;
    cin>>c;
    lli arrG[1000];
    lli arrL[1000];
    lli arrN[1000];
    lli G=0,L=0,N=0;
    while(c!=0){
        lli a,x;
        cin>>a>>x;
        if(a==1){
            arrG[G]=x;   
            G++;
        }
        else if(a==2){
            arrL[L]=x;
            L++;

        }
        else if(a==3){
            arrN[N]=x;
            N++;
        }
        c--;
    }
       K=arrG[0];
    for(lli i=0;i<G;i++){
        
        if(K<=arrG[i]){
            K=arrG[i];
        }
    }
      k=arrL[0];
    for(lli i=0;i<L;i++){
        if(k>arrL[i]){
            k=arrL[i];
        }
    }
    lli count=0;
    for(int j=0;j<N;j++){
        if(arrN[j]>=K && arrN[j]<=k){
            count++;
        }
    }
    lli T;
    if(K>k){
        T=0;
        cout<<T<<endl;
    }
    else{
        lli D=(k-K)+1;
        T=D-count;
        
        cout<<T<<endl;
    }
    n--;
    }
   
    return 0;
}
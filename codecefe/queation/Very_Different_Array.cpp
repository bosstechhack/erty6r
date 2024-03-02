#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    
    while(n>0){
    lli a,b;
    cin>>a>>b;
    lli sum=0;
    lli e, f,M;
    lli arr1[a];
    lli arr2[b];
    for(lli i=0;i<a;i++){
        cin>>arr1[i];
    }
    for(lli j=0;j<b;j++){
        cin>>arr2[j];
    }
    lli Sum=0;
    sort(arr1,arr1+a,greater<int>());
    sort(arr2,arr2+b);
    lli k=1;
    lli p=0,q=0;
    lli s=0,h=0;
    while(k<=a){
          
        if(k%2!=0){
           e= abs(arr1[s]-arr2[p]);
           f= abs(arr1[s]-arr2[b-1-q]);
           M=max(e,f);
            if(f==e){
             s++;
             p++;
           }
           else if(M==e){
            p++;
            s++;
           }
           else if(M==f){
            q++;
            s++;
           }
          
           sum=sum+M;  
        }
        
        else if(k%2==0){
           e= abs(arr1[a-1-h]-arr2[p]);
           f= abs(arr1[a-1-h]-arr2[b-1-q]);
           M=max(e,f);
           if(e==f){
            h++;
            q++;
           }
           else if(M==e){
            h++;
            p++;
           }
           else if(M==f){
            q++;
            h++;
           }
           
           sum=sum+M;

        }
        k++;
        }
         cout<<sum<<endl;
   
    n--;

    }

}
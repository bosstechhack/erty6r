#include<bits/stdtr1c++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while (n--)
    {
        lli count=0;
        lli j,k;
        cin>>j>>k;
        vector<lli>arr;
        vector<lli>arr1;
        int t=0;
        for(lli i=0;i<j;i++){
            lli p;
            cin>>p;
            arr.push_back(p);

        }
        sort(arr.begin(),arr.end());
        for(lli i=0;i<j;i++){
            if(arr[i]>=k){
                t=arr[i]%k;
                arr1.push_back(t);
                
                count=1;
               

            }
           
        }
        if(count==1){
            sort(arr1.begin(),arr1.end());
            cout<<arr1[0]<<endl;
            
        }
        else if(count==0){
             
             cout<<"-1"<<endl;
            
        }
        
    }
    
}
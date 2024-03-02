#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    lli a1[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,53,59,61,67,71,73,79,83,87,89,97};
    while(n--){
        lli s;
        cin>>s;
        lli arr[s];
        for(lli i=0;i<s;i++){
            cin>>arr[i];
        }
        lli M=arr[0];
        lli m=arr[0];
        for(lli j=0;j<s;j++){
            if(M<arr[j]){
                M=arr[j];
            }
            if(m>arr[j]){
                m=arr[j];
            }
            
        }

    }
}
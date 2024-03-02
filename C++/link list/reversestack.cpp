#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int >&input,stack<int >&newstack){
    
    while(!input.empty()){
        int k=input.top();
        input.pop();
        newstack.push(k);
    }
}
int main(){
       stack<int >st;
   cout<<"Enter The Size"<<endl;
        int n;
        cin>>n;
        int s=n;
        cout<<"Enter the Element"<<endl;
        while(n--){
            int k;
            cin>>k;
            st.push(k);
        }
        int  p=st.size();
    stack<int>result;
    reverse(st,result);
    while(!result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }
}

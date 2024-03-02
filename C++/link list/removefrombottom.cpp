#include<bits/stdc++.h>
using namespace std;
void removebottom(stack<int>&input,stack<int>&result,int s){
    if(s==1) return ;
    int val=input.top();
    input.pop();
    s--;
   
    removebottom(input,result,s);
     result.push(val);

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
    removebottom(st,result,p);
    while(!result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }
}
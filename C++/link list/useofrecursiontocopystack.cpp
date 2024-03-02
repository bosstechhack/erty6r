#include<bits/stdc++.h>
using namespace std;
 void f(stack<int>&input,stack<int>&result){
    if(input.empty())return ;
    int curr=input.top();
    input.pop();
    f(input,result);
  
    result.push(curr);
 }
 void insertionatbottom(stack<int>&input,stack<int>&result,int k){
    
    if(input.empty()){
        result.push(k);
        return;
    }
    int curr=input.top();
    input.pop();
    insertionatbottom(input,result,k);
  
    result.push(curr);
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
    stack<int>result;
  
    cout<<"Enter the Element to be inserted"<<endl;
    int p;
    cin>>p;
   
   
   
   


 }
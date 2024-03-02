
#include<bits/stdc++.h>
using namespace std;
void insertAt(stack<int>&st,int x,int idx){
    stack<int >temp;
    int n=st.size();
    int count=0;
    while(count<n-idx){
        count++;
        int curr=st.top();
        st.pop();
        temp.push(curr);

    }
    st.push(x);
    while(!temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);

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
    stack<int>result;
  
    cout<<"Enter the Element to be inserted"<<endl;
    int p;
    cin>>p;
    int id;
    
    cout<<"Enter the index"<<endl;
    cin>>id;
    insertAt(st,p,id);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

   
   
   
   


 }
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int capacity;
    int*arr;
    int top;

    public:
    Stack(int c){
        capacity=c;
        arr = new int[c];
        top=-1;



    }
    void push(int data){
        if(top==capacity-1){
            cout<<"\nOverflow";
        }
        else{
        top++;
        arr[top]=data;
        }
        

    }
    int pop(){
        if(top==-1){
            cout<<"\nUnderflow";
            return INT_MIN ;
        }
        int popedValue=arr[top];
        top--;
        return popedValue;
        
    }
    int Top(){
        if(top==-1){
          
            cout<<"\nUnderflow";
            return INT_MIN;
        }
        
        cout<<endl;
        return arr[top];
        
        

    }
    bool isEmpty(){
        return top==-1;
    }
    int size(){
        return top+1;
    }
    bool isFull(){
        return top==capacity-1;
    }

};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top();
    st.push(5);
    cout<<st.Top();
    st.push(8);
    cout<<st.Top();
    st.push(9);
    cout<<st.Top();
   st.pop();
   cout<<st.Top();
   st.pop();
   cout<<st.Top();
   st.pop();
   cout<<st.Top();
   st.pop();
   cout<<st.Top();
   st.pop();
   cout<<st.Top();
   st.pop();
   cout<<st.Top();
    

    return 0;


}

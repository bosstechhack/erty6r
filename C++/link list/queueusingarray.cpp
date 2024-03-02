#include<bits/stdc++.h>
using namespace std;

class Queue{
    int capacity;
    int *arr;
    int front ,rear;
    public:

    Queue(int c){
        capacity=c;
        arr=new int[c];
        front=rear=-1;


    }
    void enqueue(int v){
        if(rear==capacity-1){
            cout<<"Queue is Overflow";

        }
        else{
            rear++;
            arr[rear]=v;
            if(front==-1){
                front=0;
            }

        }

    }
    void dequeue(){
        if(front==-1){
            cout<<endl<<"Queue is UnderFlow";
        }
        else{
            front++;
            if(front>rear){
                front =rear=-1;
            }
            

        }
    }
        void display()
        {
            if(front==-1){
                cout<<endl<<"Queue is empty";
                return ;
            }
            for(int i=front;i<=rear;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
        bool isEmpty(){
            cout<<endl;
            return front==-1;
        }
        bool isFull(){
            cout<<endl;
            return rear==capacity-1;
        }
        int frontValue(){
            if(front==-1){
                cout<<endl<<"Empty queue";
                return INT_MIN;
            }
            cout<<endl;
            return arr[front];
        }

    
};
int main(){
    Queue t(5);
    t.enqueue(1);
    t.enqueue(2);
    t.enqueue(3);
    t.enqueue(4);
    t.enqueue(5);
    t.display();
    cout<<t.frontValue();
    t.enqueue(6);
    cout<<t.frontValue();
    t.dequeue();
     t.dequeue();
      t.dequeue();
       t.dequeue();
        t.dequeue();
         t.dequeue();
         cout<<t.frontValue();

}
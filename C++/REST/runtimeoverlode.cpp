#include<iostream>
using namespace std;
class parent{
    public:
     void print(){
        cout<<"parent classs"<<endl;

    }
     virtual void show(){
        cout<<"parent class "<<endl;

    }
};
class child :public parent{
    public:

    void print(){
        cout<<"child class"<<endl;

    }
    void show(){
     cout<<"child class "<<endl;
    }
};

int main(){
    parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
    
    return 0;
}
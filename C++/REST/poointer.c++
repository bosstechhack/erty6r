#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b =&a;
    int **c=&b;
    // & -->adresss of opeator
    // * ---->Dereference operator
    cout<<"Address of a"<<b<<endl;
    cout<<a<<endl;
    cout<<"value at address b is "  <<*b<<endl;
    cout<<"Address of a "<<  &a <<endl;
    cout<<"Address of b "<<  &b <<endl;
    cout<<"Address of b "<< c <<endl;
    cout<<"Address of c "<< &c <<endl;
    cout<<" value at Address of c "<< *c <<endl;
   
    // cout<<"address of b "<< &*c<<endl;
    cout<<"Value at addrress value at(value at (c)) is "<< **c<<endl;
    



    return 0;
}
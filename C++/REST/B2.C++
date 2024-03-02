#include<iostream>
using namespace std;
int glow =6;
void sum(){
    int a;
    cout<<glow;
}
int  main(){
    int a=14,b=15,glow=78;//preference will be give by local variable
    float pi=3.24;
    
    char c ='d';
    sum();
    cout<<glow;
    bool is_true =true;
    
    cout<<"\nThe value of pi is: "<<pi;
    cout<<"\n The value of c is : "<<c;
    cout<<"\n The value of glow is : "<<glow;
    sum();
    cout<<glow<<is_true;
    return 0;
}
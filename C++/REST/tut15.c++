#include<iostream>
using namespace std;
void g(void);
int sum(int a,int b){
    int c= a+b;
    g();
    return c;
}

int main(){
    int num1,num2;
    cin>>num1;
    
    cin>>num2;
    cout<<"sum of the number : "<<sum(num1,num2);
    return 0;
}
void g(void){
    cout<<"good morning"<<endl;
}
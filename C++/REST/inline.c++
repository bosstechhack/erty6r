#include<iostream>
using namespace std;
inline int product(int a ,int b){
    // //do not recommended to use below line with inline fuction
    // static int c=0;//this execute only one time 
    // c=c+1;//next time this function is run , the value of c will be retained
    return a*b;
}//compiling time reduce 
int moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"if you have "<<money<<"rs in your bank account you will recevid "<<moneyReceived(money)<<endl;
    
return 0;
}
//squence structure
#include<iostream>
using namespace std;
int main(){
    cout<<"this is toutorial 9"<<endl;
    int age;
    cout<<"Tell your name"<<endl;
    cin>>age;
    // if(age<18){
    //     cout<<"you can notcome to my paary"<<endl;

    // }
    // else if(age ==18){
    //     cout<<"you are a kid and you will get a kid party"<<endl;

    // }
    // else{
    //     cout<<"come to my party"<<endl;
    // }
    //swith case statement
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are 18";
        break;
    case 22:
        /* code */
        cout<<"you are 22";
        break;
    case 17:
        /* code */
        cout<<"you are miner";
        break;          
    
    default:
    cout<<"no special case"<<endl;
        break;
    }

    return 0;
}
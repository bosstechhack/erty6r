#include<iostream>
#include "this.h"
//there are two types of hearder file
using namespace std;
int c=89;
int main(){
    int a=4,b=5;
    float x=455;
    float & y =x;

    cout<<x<<endl;
    cout<<&y<<endl;
     cout<<y<<endl;
     float p = 45.67;
     int k=int (p);
     //********TYPE CASTING********
     cout<<"The value of a is"<<(float)p<<endl;
      cout<<"The value of a is"<<(int)p<<endl;
       cout<<"The value of a is"<<k<<endl;


    // cout<<"operater in c++"<<endl;
    // cout<<"The value of a+b is\n"<<a+b<<endl;
    // cout<<"The value of a-b is\n"<<a-b<<endl;
    // cout<<"The value of a*b is\n"<<a*b<<endl;
    // cout<<"The value of a/b is\n"<<a/b<<endl;
    // cout<<"The value of --a is\n"<<--a<<endl;
    // cout<<"The value of b++ is\n"<<b++<<endl;
    // cout<<"The value of a-- is\n"<<a--<<endl;

    // cout<<"The value of a++ is"<<endl<<a++;
    // cout<<"The  value of a!=b is"<<endl<<(a!=b);
    // cout<<"The  value of a==b is"<<endl<<(a==b);
    //  cout<<"The  value of  is"<<endl<<(a!=b)&&(a>b);
    //   cout<<"The  value of  is"<<endl<<(a!=b)||(a>b);

      //cout<<"the globle c is "<<::c;//:: use to get globle variable when same varial is define in  local variable
      return 0;

}
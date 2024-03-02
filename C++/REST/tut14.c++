#include<iostream>
using namespace std;
//  struct employee
// {
//     int eid;
//     char favchar;
//     float salary;
// } ;
// int main(){
//     struct employee ashish;
//      struct employee rohan;
//      struct employee sohan;
//     ashish.eid =1;
//     ashish.favchar ='a';
//     ashish.salary = 190000;
//     cout<<"The value is"<<ashish.eid<<endl;
//     cout<<"The value is"<<ashish.favchar<<endl;
//     cout<<"The value is"<<ashish.salary<<endl;
//     rohan.eid =2;
//     rohan.favchar ='r';
//     rohan.salary = 12000;
//     cout<<"The value is"<<rohan.eid<<endl;
//     cout<<"The value is"<<rohan.favchar<<endl;
//     cout<<"The value is"<<rohan.salary<<endl;
//     sohan.eid =3;
//     sohan.favchar ='s';
//     sohan.salary = 16000;
//     cout<<"The value is"<<sohan.eid<<endl;
//     cout<<"The value is"<<sohan.favchar<<endl;
//     cout<<"The value is"<<sohan.salary<<endl;
 typedef struct employee
{
    int eid;
    char favchar;
    float salary;
}ep ;
union money
{
    int rice;
    char car;
    float pounds;

};
int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 =  lunch;
    cout<<m1<<endl;
    cout<<(m1==2);
    // cout<<breakfast;

    // cout<<lunch;
    // cout<<dinner;
    // ep harry;
    // union money m1;
    // m1.rice =34;//garbage value
    // m1.car ='c';
    // cout<<m1.car<<endl;
    // cout<<m1.rice;
    


    



    
    return 0;
}
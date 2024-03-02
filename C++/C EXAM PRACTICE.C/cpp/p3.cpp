#include<iostream>
using namespace std;
class student{
    char subjectname[70];
    double marksobtain;
    public:
    double math();
    double english();
    double electronics();
    double cp();
    double it();  
};
double student::math(){
    cin>>marksobtain;
    return marksobtain;
}
double student::english(){
    cin>>marksobtain;
    return marksobtain;
}
double student::it(){
    cin>>marksobtain;
    return marksobtain;
}
double student::electronics(){
    cin>>marksobtain;
    return marksobtain;
}
double student::cp(){
    cin>>marksobtain;
    return marksobtain;
}
int main(){
    student s1,s2;
    cout<<s1.math()+s1.english()+s1.it()+s1.electronics()+s1.cp()<<endl;
    cout<<s2.math()+s2.english()+s2.it()+s2.electronics()+s2.cp()<<endl;

    



    return 0;
}
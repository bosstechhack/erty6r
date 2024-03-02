/*WAP in CPP to create a class named 'Student' with a string variable 'name'
 and an integer variable 'roll_no'. Assign the value of roll_no
  and name during run time by creating an object of the 
  class Student and display the same as output.
*/
#include<iostream>
using namespace std;
class student{
  public:
  char name[100];
  int roll;
  

};
void display(student s2){
  
  cout<<"Name: "<<s2.name<<" Roll:"<<s2.roll;
}
int main(){
  student s1;
  cout<<"Enter the name"<<endl;
  cin>>s1.name;
  cout<<"Enter the roll"<<endl;
  cin>>s1.roll;
  display(s1);
}
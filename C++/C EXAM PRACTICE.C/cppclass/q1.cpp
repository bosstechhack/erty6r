/*1.	A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/
#include<iostream>
using namespace std;
class customer{
    public:
    float cost;
    void vaildfordiscount(){
        if(cost>=1000){
            cost=cost*0.9;
            cout<<cost<<endl;
        }
        cout<<cost<<endl;
        
    }

};
int main(){
 customer c[5];
 
 for(int i=0;i<5;i++){
    cin>>c[i].cost;
    c[i].vaildfordiscount();

 }
  return 0;
}

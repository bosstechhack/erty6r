#include<iostream>
using namespace std;
class ABC{
      int x;
    public:
  
    void set(int n){
        x=n;

    }
    int get(){
        return x;
    }
};
int main(){
    
    ABC t;
    
    t.set(3);
    cout<<t.get()<<endl;
    return 0;
}
/*Abstraction 
-enable us to display onliy essential information
while hiding implemenntion details
ex- pow(x,y)=x^y*/


/*inharitance
-public:-accessible to all class

-private:-accessible only in own class
-protected:-accessible in own class parent class & child class


*/


//compile time 
#include<iostream>
using namespace std;

//function overloding
class sum{
    public:
    void add(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
    void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }

};
int main(){
    sum s;
    s.add(2,3);
    s.add(2,3,4);
    

    return 0;
}
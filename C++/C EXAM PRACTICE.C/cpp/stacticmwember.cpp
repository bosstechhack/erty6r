#include<iostream>
using namespace std;
class item{
    static int count;
    int number;
    public:
    void getdata(int a){
        number =a;
        count++;

    }
    void getccount(void){
        cout<<"count="<<count<<endl;
    }
    };
    int item::count=0;
    int main(){
        item a,b;
        a.getccount();
        b.getccount();
        // a.getdata(100);
        b.getdata(300);
        b.getdata(200);
        a.getccount();
        b.getccount();
       
        return 0;

    }

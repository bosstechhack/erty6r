#include<iostream>
using namespace std;
class car{
    
    char CarModel[30];
    int CarNumber;
    public:
    void getdata();
    void showdata();

};
void car:: getdata(){
    car c1;
    cin>>c1.CarModel>>c1.CarNumber;
}
void car:: showdata(){
    car c1;
    cout<<c1.CarModel<<" "<<c1.CarNumber<<endl;
}

int main(){

    car c1;
    c1.getdata();
    c1.showdata();
    return 0;
}
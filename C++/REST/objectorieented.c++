#include<iostream>
using namespace std;

int main(){
    class Room {
    public:
        double length=15;
        double breadth=24;
        double height=9;   
        double calculateArea(){   
            return length * breadth;
        }
        double calculateVolume(){   
            return length * breadth * height;
        }
};

    return 0;
}
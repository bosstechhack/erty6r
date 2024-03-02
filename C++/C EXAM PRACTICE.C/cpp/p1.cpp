#include<iostream>
using namespace std;
class room{
    char shap[50]="circle";
    char color[60]="orangr";
    friend void hiddenelements();

    public:
    int length;
    int width;
    int height;
    int area(){

      return length*width;
    }
    int volume(){
        return length*width*height;
    }
};
void hiddenelements(){
    room r2;
cout<<r2.color<<r2.shap<<endl;
}
int main(){
    room r1;
    cin>>r1.length>>r1.width>>r1.height;
    hiddenelements();

    r1.area();
    cout<<"area: "<<r1.area()<<endl;
    r1.volume();
    cout<<"volume: "<<r1.volume()<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class Fruit{
    public:
    string name;
    string color;

};
int main(){
    Fruit apple;
    apple.name ="Apple";
    apple.color = "red";
    cout<<apple.name<<"-"<<apple.color<<endl;
    Fruit *mango = new Fruit();
    mango->name="Mango";
    mango->color="yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;
    return 0;
}
/*type of cunstructer
type of counstructor
1.default constructor-no args passed
2.parametrise constructor-args passed
3.copy constructor-initalise an obj by another existing obj
*/

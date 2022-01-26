#include <iostream>
using namespace std;

// Constructor
// Constructor is a member function that is called when an object is created.
// Basically, a constructor has the same name as the class and is used to initialize the object.
// We can have multiple constructors in a class.
// Constructor is a member function of a class.
// If we don't have any constructor in a class, compiler will create a default constructor.
// The default constructor is a constructor with no parameters.
// Default constructor is called when an object is created.
// The constructor does not return any value.

struct V3{
    double x,y,z;
    V3(double a, double b, double c){
        x= a;
        y=b;
        z=c;
    }
    V3(double a){
        x=y=z=a;
    }
    V3(){
        x=y=z=0;
    }
};

int main(){
    V3 v1(1,2,3);
    V3 v2(4);
    V3 v3;
    cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<endl;
    cout<<v2.x<<" "<<v2.y<<" "<<v2.z<<endl;
    cout<<v3.x<<" "<<v3.y<<" "<<v3.z<<endl;
    return 0;
}
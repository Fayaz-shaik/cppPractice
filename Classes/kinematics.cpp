// This program demonstates the Operation overloading.

#include <iostream>
using namespace std;

struct V3{
    double x,y,z;
    V3(double a, double b, double c){
        // This is the constructor.
        x=a,y=b,z=c;
    }
    V3(){
        // This is the default constructor.
        x=0,y=0,z=0;
    }
    V3 operator+(V3 v){
        //  This is the Operation overloading of the + operator.
        return V3(x+v.x,y+v.y,z+v.z);
    }
    V3 operator*(double a){
        // This is the Operation overloading of the multiplication.
        return V3(x*a,y*a,z*a);
    }
};
int main(){
    V3 u = {1,2,3};
    V3 a = {4,5,6};
    V3 s;
    double t = 10;
    s = u.operator*(t).operator+(a.operator*(t).operator*(t).operator*(0.5));
    cout << s.x << " " << s.y << " " << s.z << endl;
    return 0;
}
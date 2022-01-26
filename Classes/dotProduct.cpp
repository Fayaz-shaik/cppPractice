#include<iostream>
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
    double operator$(V3 v){
        return (x*v.x+y*v.y+z*v.z);
    }
};
int main(){
    V3 u = {1,2,3} , v = {4,5,6};
    double s;
    s = u.operator$(v);
    cout << "The dot product is :"<< s << endl;
    return 0;
}
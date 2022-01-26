#include<iostream>
using namespace std;
//This is the demos of the intializer list type of constructors
//In the intializer list type of constructors, the intializer list is used to initialize the data members of the class
//See the snippet below:
class Point{
    private:
        int x, y;
    public:
        Point() : x(0), y(0){
           
        }
        Point(int x1, int y1) : x(x1), y(y1){
            
        }
        void print(){
            cout << x << " " << y << endl;
        }
};

int main()
{
    Point p1, p2(10, 20);
    p1.print();
    p2.print();
    Point *ptr = new Point(5, 10);
    ptr -> print();
    return 0;
}
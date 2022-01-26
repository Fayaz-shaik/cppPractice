#include<iostream>
using namespace std;

class Test1{
//This is a shallow copy.
//The copy constructor is called when the object is copied.
//Here the copy constructor was not defined.It is created by the compiler during the compilation.
//See the snippet below:
//Due to the shallow copying, the data members of the class are copied and when we change in one object the changes were reflected in the other object also.
//This can be avoided by using deep copying.
    int *ptr;
    public:
        Test1(int x){
            ptr = new int(x); 
        }
        void set(int x){
            *ptr = x;
        }
        void print(){
            cout << *ptr << " ";
        }
};

#include<iostream>
using namespace std;

class Test2{
//This is a deep copy.
//The copy constructor is called when the object is copied.
//Here the copy constructor is defined.
//Here, we had avoided the shallow copying and a new object is created in the memory for t2.
//See the snippet below:
    int *ptr;
    public:
        Test2(int x){
            ptr = new int(x); 
        }
        Test2(const Test2 &t){
            //This is the copy constructor.
            int val = *(t.ptr);
            ptr = new int (val);
        }
        void set(int x){
            *ptr = x;
        }
        void print(){
            cout << *ptr << " ";
        }
};

int main()
{
//Demonstrating the deep copy.
    Test2 t1(10);
    Test2 t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    cout<<endl;
//Demonstrating the shallow copy.
    Test1 t3(10);
    Test1 t4(t3);
    t4.set(20);
    t3.print();
    t4.print();


    return 0;
}
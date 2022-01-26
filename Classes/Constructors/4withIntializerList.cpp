#include<iostream>
using namespace std;
//Here you could see that in the Main member function, the intializer list is used to initialize the data members of the class
//See the snippet below:
class Test{
    public:
        Test(){cout << "Default\n"; }
        Test(int x){cout << "Parameterised\n"; }
};

class Main{
    Test t;
    public:
        Main(): t(10){
            
        }
};

int main()
{
    Main m;
    return 0;
}
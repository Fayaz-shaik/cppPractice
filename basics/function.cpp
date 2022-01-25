#include <iostream>
using namespace std;

void function(int x,int y,int z)
{
    cout << x << " " << y << " " << z << endl;
}
int main()
{   int x =1;
    function(++x,++x,++x);
    return 0;
}
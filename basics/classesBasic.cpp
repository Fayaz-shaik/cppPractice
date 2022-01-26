#include <iostream>

using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"NAME = "<<name<<endl;
        cout<<"AGE = "<<age<<endl;
        cout<<"GENDER = "<<gender<<endl;
    }
};

int main(){

    student a;
    a.name = "fayaz";
    a.age = 19;
    a.gender = false;
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"name : ";
        cin>>arr[i].name;
        cout<<"age : ";
        cin>>arr[i].age;
        cout<<"gender : ";
        cin>>arr[i].gender;

    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}
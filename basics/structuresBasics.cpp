#include<iostream>
using namespace std;
struct book{
    char name[20];
    double price;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    book b1;
    cout<<"Enter name: \n";
    cin.getline(b1.name,20);
    
    cout<<"Enter price: \n";
    cin>>b1.price;
    b1.display();
    b1.display();
    return 0;

}
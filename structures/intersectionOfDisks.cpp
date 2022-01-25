//This code is to find the number of disks which are intersecting each other, provided their centers and their respective radii.

#include<iostream>
#include<cmath>
using namespace std;
struct point{
    double x;
    double y;
};
struct disk{
    point center;
    double radius;

    bool intersect(disk d1, disk d2){
        double distance = sqrt(pow(d1.center.x - d2.center.x, 2) + pow(d1.center.y - d2.center.y, 2));
        return distance<=d1.radius+d2.radius;
    }
    void readData(disk disks[],int n){
        for (int i=0;i<n;i++){
            cin>> disks[i].center.x >>disks[i].center.y >> disks[i].radius;
        }
    }
    void printData(disk disks[],int n){
        for (int i=0;i<n;i++){
            cout<<disks[i].center.x<<" "<<disks[i].center.y<<" "<<disks[i].radius<<endl;
        }
    }
    bool checkAllPairs(disk disks[],int n){
        for (int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if (intersect(disks[i],disks[j])){
                    return true;
                }
            }
        }
        return false;
    }

};

int main(){
    int n;
    cout<<"enter the number of disks"<<endl;
    cin>>n;
    disk disks[n];
    disk d;

    d.readData(disks,n);
    d.printData(disks,n);
    if (d.checkAllPairs(disks,n)){
        cout<<"disks are intersecting"<<endl;
    }
    else{
        cout<<"disks are not intersecting"<<endl;
    }

}
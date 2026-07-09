#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the first coordinate ";
    cin>>x1>>y1;
    cout<<"Enter the second coordinate ";
    cin>>x2>>y2;
    cout<<"Enter the third coordinate ";
    cin>>x3>>y3;
    if(((y2-y1)*(x3-x2))==((y3-y2)*(x2-x1))){
        cout<<"Straight line";
    }
    else{
        cout<<"Not in Straight";
    }
 
}
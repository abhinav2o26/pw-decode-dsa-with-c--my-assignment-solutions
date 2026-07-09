#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the radius ";
    cin>>r;
    int ar=3.1415*r*r;
    int ci=2*3.1415*r;
    if(ar>ci){
        cout<<"Area of this circle is greater than its circumference";
    }
    else{
        cout<<"Area of this circle is less than its circumference";
    }
    
}
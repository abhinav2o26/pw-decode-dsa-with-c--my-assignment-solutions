#include<iostream>
using namespace std;
float area(int x){
    float ar=x*x*3.415;
    return ar;
}
int main(){
    int r;
    cout<<"Enter the number ";
    cin>>r;
    cout<<area(r);
}
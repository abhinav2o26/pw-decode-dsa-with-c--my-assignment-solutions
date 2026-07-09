#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is largest!";
        }
        else{
            cout<<c<<" is largest!";
        }
    }
    if(b>a){
        if(b>c){
            cout<<b<<" is largest!";
        }
        else{
            cout<<c<<" is largest!";
        }
    }
   
}
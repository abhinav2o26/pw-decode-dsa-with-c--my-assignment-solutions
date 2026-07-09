#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length ";
    cin>>l;
    cout<<"Enter breadth ";
    cin>>b;
    int ar=l*b;
    int per=2*(l+b);
    if(ar>per){
        cout<<"Area is greater than perimeter";
    }
    else{
        cout<<"Area is less than perimeter";
    }
}
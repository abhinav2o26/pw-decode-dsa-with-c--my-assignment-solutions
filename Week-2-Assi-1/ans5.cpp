#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first side ";
    cin>>a;
    cout<<"Enter the second side ";
    cin>>b;
    cout<<"Enter the third side ";
    cin>>c;
    if(a==b && b==c){
        cout<<"Equilateral";
    }
    if(a!=b && b!=c && c!=a){
        cout<<"Scalene";
    }
    if((a==b && b!=c ) || (b==c && b!=a) || (c==a && a!=b) ){
        cout<<"Isosceles";
    }
}
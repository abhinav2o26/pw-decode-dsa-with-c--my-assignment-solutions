#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the two numbers";
    cin>>x>>y;
    int* p1=&x;
    int* p2=&y;
    cout<<*p1+*p2;
}
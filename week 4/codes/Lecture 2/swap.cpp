#include<iostream>
using namespace std;
void swap(int* x,int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main(){
    int x,y;
    cout<<"Enter the two numbers";
    cin>>x>>y;
    swap(&x,&y);
    cout<<x<<" "<<y;
}
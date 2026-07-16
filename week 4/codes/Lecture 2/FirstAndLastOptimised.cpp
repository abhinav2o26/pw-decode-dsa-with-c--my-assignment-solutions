#include<iostream>
using namespace std;
void num(int n){
    int a=n%10;
    int count=0;
    while(n>9){
        n/=10;
    }
    cout<<a<<endl<<n;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    num(n);
}

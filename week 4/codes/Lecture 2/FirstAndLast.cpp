#include<iostream>
using namespace std;
void num(int n){
    int a;
    int count=0;
    while(n!=0){
        a=n%10;
        n/=10;
        count++;
        if(count==1||n==0) cout<<a<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    num(n);
}

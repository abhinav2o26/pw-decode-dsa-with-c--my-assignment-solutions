#include<iostream>
using namespace std;
int main() {
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    int a,sum,r;
    sum=0; r=0;
    while(n>0){
        r*=10;
        a=n%10;
        r+=a;
        n/=10;
        sum+=a;
    }
    cout<<sum<<" "<<r;
}
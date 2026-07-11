#include<iostream>
using namespace std;
int main() {
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    int a,sum;
    sum=0;
    while(n>0){
        a=n%10;
        n/=10;
        if(a%2==0) sum+=a;
    }
    cout<<sum;
}
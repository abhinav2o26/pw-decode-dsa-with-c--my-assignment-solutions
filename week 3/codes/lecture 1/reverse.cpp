#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the number";
    cin>>n;
    int a=0;
    int count=0;
    int n1=0;
    for(int i=1;n>0;){
        n1*=10;
        a=n%10;
        n1+=a;
        n/=10;
        
    }
    cout<<n1;
}
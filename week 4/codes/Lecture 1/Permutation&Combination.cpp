#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    int b=x;
    for(int i=1;i<=b;i++){
        a*=x;
        x--;
    }
    return a;
}
int per(int n,int r){
    int a=fact(n)/fact((n-r));
    return a;
}
int com(int n,int r){
    int a=fact(n)/(fact(r)*fact(n-r));
    return a;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"The permutation and combination of your numbers are "<<per(n,r)<<" and "<<com(n,r);
    
}
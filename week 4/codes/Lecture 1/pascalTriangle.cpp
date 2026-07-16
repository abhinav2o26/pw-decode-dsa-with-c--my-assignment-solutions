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
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j=0;j<=i;j++){
            cout<<com(i,j)<<" ";
        }
        cout<<endl;
    }
    
}
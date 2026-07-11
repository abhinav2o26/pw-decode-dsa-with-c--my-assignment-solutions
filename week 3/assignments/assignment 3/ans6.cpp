#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int nsp=n*(n-1);
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        if(i<=nsp) cout<<"*"; 
        nsp-=n;
        cout<<endl;
    }
}
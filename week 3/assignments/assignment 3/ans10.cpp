#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int nst=1;
    int nsp=2*n-3;
    int nst2=1;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<n) nst++;
        if(i>n) nst--;
        

        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        if(i<n) nsp-=2;
        if(i>n) nsp+=2;

        for(int q=1;q<=nst2;q++){
            cout<<"*";
        }
        if(nst<=n-1&&i<n) nst2++;
        if(i>=n+2) nst2--;
        cout<<endl;
    

    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int nsp=n;
    int nsp2=-1;
    for(int i=1;i<=2*n+1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" "; 
        }
        if(i<=((2*n-1)/2)+1) nsp--;
        else nsp++;
        cout<<"*";
        if(i==((2*n+1)/2)+1){
            for(int a=1;a<=n-1;a++) cout<<"*";
        }
        for(int k=1;k<=nsp2;k++){
            if(i>=3&&i!=((2*n+1)/2)+1) cout<<" ";
        }
        if(i!=1 && i!=2*n+1) cout<<"*";
        for(int k=1;k<=nsp2;k++){
            if(i>=3&&i!=((2*n+1)/2)+1) cout<<" ";
        }
        if(i<=n-1) nsp2++;
        if(i>=n+2) nsp2--;
        if(i!=1 && i!=2*n+1) cout<<"*";
        if(i==((2*n+1)/2)+1){
            for(int a=1;a<=n-1;a++) cout<<"*";
        }
        cout<<endl;
    }
}
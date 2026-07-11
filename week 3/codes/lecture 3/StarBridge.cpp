#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int nsp=0;
    int nst=2*n-1;
    int m=n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nst;k++){
            cout<<"*";
            for(int j=1;j<=nsp;j++){
                if(k==m) cout<<" ";    
            }
        }
        m--;
        if(i>1){ 
            nst-=2;
            nsp+=2;
        }
        else{
            nst--;
            nsp++;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int m=n-1;
    int nsp=1;
    int a=n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int q=1;q<=m;q++){
            cout<<q+a;
        }
        a++;
        nsp+=2;
        m--;
        cout<<endl;
    }
}
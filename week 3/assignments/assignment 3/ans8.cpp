#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    int m=1;
    int a=2*n;
    for(int i=1;i<=n;i++){
        for(int j=a;j>=1-i;j--){
            cout<<" ";
        }
        a-=2;
        cout<<i;
        for(int k=1;k<=m;k++){
            if(i>1) cout<<" ";
        }
        m+=2;
        if(i>1) cout<<i;
        cout<<endl;
    }
}
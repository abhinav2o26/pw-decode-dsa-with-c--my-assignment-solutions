#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"Enter column: ";
    cin>>m;
    int a=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
        for(int k=1;k<=a;k++){
            for(int j=1;j<=4;j++){
                cout<<" ";
            }
        }
        if(i<n) a++;
        else a--;
        if(i%2==0) cout<<"*";
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a<=j) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
        a--;
    }
}
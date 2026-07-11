#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=65;j<=(n+64);j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}
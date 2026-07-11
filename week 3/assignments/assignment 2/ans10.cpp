#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row: ";
    cin>>n;
    int a=6;
    for(int i=1;i<=n;i++){
        a=i;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
        
    }
}
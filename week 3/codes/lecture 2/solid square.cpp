#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"No of star per side ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            a++;
            cout<<a;
        }
        cout<<endl;
    }
}
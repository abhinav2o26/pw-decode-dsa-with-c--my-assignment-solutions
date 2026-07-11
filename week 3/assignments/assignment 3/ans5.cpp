#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int a=1;
    int b=n-1;
    int r=1;
    for(int c=1;c<=(2*n-1);c++){
        cout<<r;
        if(c<((2*n-1)/2)+1) r++;
        else r--;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int c=n-i;
        for(int j=1;j<=b;j++){
            cout<<j;
        }
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        a+=2;
        for(int q=1;q<=b;q++){
            cout<<c;
            c--;
        }
        b--;
        cout<<endl;
    }
}
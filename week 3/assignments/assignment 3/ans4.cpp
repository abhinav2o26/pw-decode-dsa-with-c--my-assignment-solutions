#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int a=1;
    int b=n-1;
    for(int c=65;c<=(2*n-1)+64;c++){
        cout<<(char)c;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int m=65;
        int n=68+i;
        for(int j=1;j<=b;j++){
            cout<<(char)m;
            m++;
        }
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        a+=2;
        for(int q=1;q<=b;q++){
            cout<<(char)n;
            n++;
        }
        b--;
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int nst=n-1;
    int nsp=1;
    int m=((2*n-3)/2)+1;
    for(int c=1;c<=2*n-1;c++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=2*n-3;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }

        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int q=1;q<=nst;q++){
            cout<<"*";
        }
        if(i<m){
            nst--;
            nsp+=2;
        }
        else {
            nst++;
            nsp-=2;
        }
        cout<<endl;
    }
        for(int c=1;c<=2*n-1;c++){
        cout<<"*";
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    int m=1;
    for(int i=1;i<=n;i++){
        int a=64+i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=m;k++){
            cout<<(char)a;
            if(k<i) a--;
            else a++;
        }
        m+=2;
        cout<<endl;
        
    }
}
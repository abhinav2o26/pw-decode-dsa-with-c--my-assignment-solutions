#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"Enter the two numbers : ";
    cin>>x>>y;
    a=1;
    if(x==0&&y==0){
        cout<<0;
    }
    else if(y<0){
        for(int i=1;i<=-y;i++){
        a*=x;
    }
        cout<<1.0/a;
    }
    else {
        for(int i=1;i<=y;i++){
        a*=x;
    }
        cout<<a;
    }
}
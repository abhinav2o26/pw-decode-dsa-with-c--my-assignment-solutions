#include<iostream>
using namespace std;
int main(){
    int x,y,a,y1;
    cout<<"Enter the two numbers : ";
    cin>>x>>y;
    a=1;
    y1=y;
    if(y<0) y=-y;
    for(int i=1;i<=y;i++){
        a*=x;
    }
    if(x==0&&y==0){
        cout<<0;
    }
    else if(y1<0)cout<<1.0/a;
    else cout<<a;
}
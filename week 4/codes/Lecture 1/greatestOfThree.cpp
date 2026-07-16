#include<iostream>
using namespace std;
int maxthree(int x,int y,int z){
    if(x>y){
        if(x>z) return x;
        else return z;
    }
    else{
        if(y>z) return y;
        else return z;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the three numbers ";
    cin>>a>>b>>c;
    cout<<maxthree(a,b,c);
    
}
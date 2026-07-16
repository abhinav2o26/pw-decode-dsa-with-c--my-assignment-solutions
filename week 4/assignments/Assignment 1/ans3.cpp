#include<iostream>
using namespace std;
void odd(int x,int y){
    for(int i=x+1;i<y;i++){ //in between
        if(i%2!=0) cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter the two numbers ";
    cin>>a>>b;
    odd(a,b);
}
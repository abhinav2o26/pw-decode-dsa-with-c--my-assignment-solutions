#include<iostream>
using namespace std;
void num(int x){
    int sq=x*x;
    int count=0;
    while(x!=0){
        x/=10;
        count++;
    }
    cout<<count<<endl<<sq;
}
int main(){
    int a,b;
    cout<<"Enter the  number ";
    cin>>a;
    num(a);
}
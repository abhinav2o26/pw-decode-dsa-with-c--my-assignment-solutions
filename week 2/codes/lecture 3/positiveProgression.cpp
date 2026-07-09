#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number ";
    // cin>>n;
    int a=100;
    for(int i=1;i>0;i++){
       cout<<a<<endl;
       a-=3;
       if (a<0){
           break;
       }
       
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int b=n;
    
    int c=0;
    for(int i=1;b!=0;i++){
        b/=10;
        c++;
        
    }
    cout<<c<<" is the number of digits in "<<n;
        
        
        
        
    
}
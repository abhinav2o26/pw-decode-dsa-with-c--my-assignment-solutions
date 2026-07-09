#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x%5==0 || x%3==0){
        if(x%15!=0){
            cout<<x<<" is the required number";
        }
        else{
            cout<<x<<" is divisible by either 3 or 5 but it is also divisible by 15";
        }
    }
    else{
        cout<<x<<" is not even divisible by either of 3 or 5";
    }
    
    
}
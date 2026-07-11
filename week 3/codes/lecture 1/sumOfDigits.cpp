#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    int a;
    int sum=0;
    for(int i=1;n!=0;){
        a=n%10;
        n/=10;
        sum+=a;
        
        
    }
    
    cout<<"It  has "<<sum<<" as sum of digits";
}
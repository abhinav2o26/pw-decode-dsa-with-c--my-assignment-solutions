#include<iostream>
using namespace std;
int main(){
    float n; 
    cout<<"Enter the number ";
    cin>>n;
    int a1,a2,an;
    a1=0; a2=1; an=a1+a2;
    for(int i=1;i<=n;i++){
        cout<<an<<" ";
        an=a1+a2;
        a1=a2;
        a2=an;
        
     
        
        
        
    }
    
}
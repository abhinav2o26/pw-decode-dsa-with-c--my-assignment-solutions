#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first student's marks ";
    cin>>a;
    cout<<"Enter the second student's marks ";
    cin>>b;
    cout<<"Enter the third student's marks ";
    cin>>c;
    if(a<b && a<c){
        cout<<"First has scored lowest i.e "<<a;
    }
    if(b<a && b<c){
        cout<<"Second has scored lowest i.e "<<b;
    }
    if(c<b && c<a){
        cout<<"Third has scored lowest i.e "<<c;
    }
    
    
}
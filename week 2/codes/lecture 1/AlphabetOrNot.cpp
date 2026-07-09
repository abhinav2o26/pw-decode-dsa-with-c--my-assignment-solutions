#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character: ";
    cin>>ch;
    if(((int)ch>=65&&(int)ch<=90) || ((int)ch>=97&&(int)ch<=122)){
        cout<<"Your character "<<ch<<" is an  alphabet";
    }
   else{
        cout<<"Your character "<<ch<<" is not an  alphabet";
    }
    
    
}
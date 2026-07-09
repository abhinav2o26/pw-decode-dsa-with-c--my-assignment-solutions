#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character ";
    cin>>ch;
    int a=(int)ch;
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        cout<<"Alphabet";
    }
    else if(a>=48 && a<=57){
        cout<<"Digit";
    }
    else {
        cout<<"Special Character";
    }
 
}
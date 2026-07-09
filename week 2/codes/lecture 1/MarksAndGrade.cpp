#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the marks from 1 to 100 ";
    cin>>m;
    if(m>=0&&m<=100){
        if(m>=91&&m<=100){
            cout<<"Excellent";
        }
        if(m>=81&&m<=90){
            cout<<"Very Good";
        }
        if(m>=71&&m<=80){
            cout<<"Good";
        }
        if(m>=61&&m<=70){
            cout<<"Can do better";
        }
        if(m>=51&&m<=60){
            cout<<"Average";
        }
        if(m>=40&&m<=50){
            cout<<"Below Average";
        }
        if(m<40){
            cout<<"Fail";
        }
    }
    else{
        cout<<"Please enter valid marks";
    }
    
}
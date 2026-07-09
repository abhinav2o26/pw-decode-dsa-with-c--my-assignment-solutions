#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"Enter the year ";
    cin>>yr;
    if(yr%4==0){
        cout<<yr<<" is leap year";
    }
    else{
        cout<<yr<<" is not a leap year";
    }
}
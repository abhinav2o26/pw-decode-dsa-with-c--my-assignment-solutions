#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"There should be at least one zero unit while chosing x and y"<<endl;
    cout<<"Enter the x coordinate ";
    cin>>x;
    cout<<"Enter the y coordinate ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"Origin";
    }
    else if(x==0 || y==0){
        if(x==0){
            cout<<"On y axis";
        }
        if(y==0){
            cout<<"On x axis";
        }
    }
}
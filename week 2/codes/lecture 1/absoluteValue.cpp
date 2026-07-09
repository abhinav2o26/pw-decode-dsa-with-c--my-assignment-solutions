#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number ";
	cin>>x;
	if(x>=0){
	    cout<<"The absolute value of "<<x<<" is: "<<x;
	}
	else{
	    cout<<"The absolute value of "<<x<<" is: "<<-x;
	}
}
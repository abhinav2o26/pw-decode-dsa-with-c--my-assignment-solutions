#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the positive integer ";
	cin>>x;
	if(x>=0){
	    if(x>=100&& x<=999){
	    cout<<"The number "<<x<<" is a three digit number";
	    }
	    else{
	        cout<<"The number "<<x<<" is not a three digit number"; 
	    }
	}
	else{
	    cout<<"Please enter a positive integer";
	}
}
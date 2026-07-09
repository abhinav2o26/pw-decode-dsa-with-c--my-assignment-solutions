#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the positive integer ";
	cin>>x;
	if(x>=0){
	    if(x%3==0&& x%5==0){
	    cout<<"The number "<<x<<" is divisible by 5 and 3";
	    }
	    else{
	        cout<<"The number "<<x<<" is not divisible by 5 and 3"; 
	    }
	}
	else{
	    cout<<"Please enter a positive integer";
	}
}
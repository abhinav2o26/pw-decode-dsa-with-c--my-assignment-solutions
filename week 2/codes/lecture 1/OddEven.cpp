#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number ";
	cin>>x;
	if(x>0){
	    if(x%2==0){
	    cout<<"The given number "<<x<<" is even";
	    }
	    else{
	        cout<<"The given number "<<x<<" is odd";    
	    }
	}
}
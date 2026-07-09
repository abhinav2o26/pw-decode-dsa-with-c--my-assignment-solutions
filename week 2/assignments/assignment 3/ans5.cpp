#include<iostream>
using namespace std;
int main() {
	int a,r,n;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the common ratio : ";
	cin>>r;
	cout<<"Enter the number of terms : ";
	cin>>n;
	for(int i=1;i<=n;i++){
	    cout<<a<<endl;
	    a*=r;
	}
	    
	
	
}
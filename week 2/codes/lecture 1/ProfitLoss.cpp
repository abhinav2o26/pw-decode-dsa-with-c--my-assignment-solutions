#include<iostream>
using namespace std;
int main(){
	int cp,sp;
	cout<<"Enter the cost and selling price ";
	cin>>cp>>sp;
	if(cp>sp){
	    cout<<"Seller made a loss and of "<<cp-sp;
	}
	if(cp==sp){
	    cout<<"Seller doesn't make any loss nor profit";
	}
	if(cp<sp){
	    cout<<"Seller made a profit and of "<<sp-cp;
	}
}
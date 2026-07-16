#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of elements in array ";
   cin>>n;
   int arr[n];
   for(int i=0;i<=(n-1);i++){
       cout<<"Enter the number with index "<<i<<" : ";
       cin>>arr[i];
   }
   cout<<arr[4];
}

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of elements in array ";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements : ";
   for(int i=0;i<=(n-1);i++){
       cin>>arr[i];
   }
   cout<<"Your required rollnos are"<<endl;
   for(int i=0;i<=(n-1);i++){
       if(arr[i]<35) cout<<i<<" ";
   }
}

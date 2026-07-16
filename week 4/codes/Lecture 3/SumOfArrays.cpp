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
   int sum=0;
   cout<<"Your required answer is "<<endl;
   for(int i=0;i<=(n-1);i++){
        sum+=arr[i];
   }
   cout<<sum;
}

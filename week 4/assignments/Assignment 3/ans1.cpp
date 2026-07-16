#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n; 
   cout<<"Enter the number of elements";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements";
   for(int i=0;i<=n-1;i++){
       cin>>arr[i];
   }
   int prod=1;
   for(int i=0;i<=n-1;i++){
        prod*=arr[i];
   }
   cout<<"The required number is "<<prod;
   

}

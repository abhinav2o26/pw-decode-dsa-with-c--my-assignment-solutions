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
   int x;
   cout<<"Enter the number: ";
   cin>>x;
   int count=0;
   for(int i=0;i<=n-1;i++){
       if(arr[i]>x) count++;
   }
   cout<<"The required number is "<<count;
   

}

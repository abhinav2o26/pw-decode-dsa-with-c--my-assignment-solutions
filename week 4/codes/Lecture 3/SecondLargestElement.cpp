#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cout<<"Enter the no of elements in array";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements : ";
   for(int i=0;i<=n-1;i++){
       cin>>arr[i];
   }
   int max=INT_MIN;
   for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
   }
   for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
   }
   int x=INT_MIN;
   for(int i=0;i<=n-1;i++){
       if(x<arr[i]&&arr[i]<max) x=arr[i];
   }
   cout<<"Second Largest element is "<<x;
    
   

}

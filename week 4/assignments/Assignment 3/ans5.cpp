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
   for(int i=1;i<=n-1;i++){
        if(arr[i-1]>arr[i])   x=i-1;  
   }
   cout<<"Your required number is "<<(arr[x]+1);
   
   

}

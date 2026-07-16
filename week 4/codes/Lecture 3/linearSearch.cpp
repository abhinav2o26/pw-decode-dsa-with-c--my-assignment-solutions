#include<iostream>
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
   int x;
   cout<<"Enter the element to be searched: ";
   cin>>x;
   bool flag=false;
   for(int j=0;j<=n-1;j++){
       if(arr[j]==x) flag=true;
   }
   if(flag==true) cout<<"element found";
   else cout<<"element not found";
}

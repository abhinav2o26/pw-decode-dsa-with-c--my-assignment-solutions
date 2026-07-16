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

   bool flag=false;
   for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                flag=true;
                break;
                }
            }
        }
   }
   if(flag==true) cout<<"It contains duplicates";
   else cout<<"It does not contain duplicates";
   

}

#include<iostream>
using namespace std;
int main(){
   int a,b;
   cout<<"Enter the two numbers ";
   cin>>a>>b;
   char ch;
   cout<<"What do you want to do ";
   cin>>ch;
   switch(ch=='+'){
       case 1:
        cout<<a+b;
   }
   switch(ch=='-'){
       case 1:
        cout<<a-b;
   }
   switch(ch=='*'){
       case 1:
       cout<<a*b;
   }
   switch(ch=='/'){
       case 1:
       cout<<(float)a/(float)b;
   }
   
}
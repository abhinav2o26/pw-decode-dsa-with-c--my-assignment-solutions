#include<iostream>
using namespace std;
void num(int n,int* ptr1,int* ptr2){
    *ptr2=n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fd,ld;
    int *ptr1=&fd;
    int *ptr2=&ld;
    num(n,ptr1,ptr2);
    cout<<ld<<endl<<fd;
}

#include<iostream>
using namespace std;
int main() {
    int a,sum,n;
    sum=0;
    for(int i=1;i<=500;i++){
        n=i;
        while(n>0){
            a=n%10;
            n=n/10;
            sum=sum+(a*a*a);
        }
    if (sum==i) cout<<i<<endl;
    sum=0;
    }
}
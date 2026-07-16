#include<iostream>
using namespace std;
void square(int x){
    for(int i=1;i<=x;i++){
        int n=i;
        n=n*n;
        cout<<n<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    square(n);
}
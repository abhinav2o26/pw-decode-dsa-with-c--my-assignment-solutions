#include<iostream>
using namespace std;
int fun(int x){
    return x;
}
int fun(){
    return 9;
}
int main(){
    cout<<fun();//It is not giving error so yes but main function can't be called.
}
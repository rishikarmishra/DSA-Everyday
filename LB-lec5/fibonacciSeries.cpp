#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the length"<<endl;
    cin>>n;

    int a = 0;
    int b = 1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i= 1;i<=10;i++){
       int  nextNumber = a + b;
       cout<<nextNumber<<" ";
       a = b;
       b = nextNumber;
    }
    return 0;
}
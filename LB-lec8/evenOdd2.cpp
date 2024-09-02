#include<iostream>
using namespace std;
int isevenOdd(int num ){
    if (num%2==0){
        cout<<"The nuber"<<num<<"is even"<<endl;
    }else{
        cout<<"The number" <<num<<"is odd"<<endl;
    }
    return 50;
}
int main(){
    int a ;
    cout<<"Enter a Number that you want to check if it is even or odd"<<endl;
    cin>>a;
    //int isEven = isevenOdd(a);
    cout<<isevenOdd(a);
    return 0;
}
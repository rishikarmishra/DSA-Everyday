#include<iostream>
using namespace std;
bool isEven(int n){
 if (n&1){
    return 0;
 }
 else {
    return 1;
 }
}
int main(){
    int n;
    cout<<"The number that you want to check "<<endl;
    cin>>n;
    cout<<isEven(n);
    if (isEven(n)){
        cout<<"Number is Even "<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
    return 0;
}
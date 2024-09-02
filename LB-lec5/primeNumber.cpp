#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    bool x = 1 ;
    for(int i = 2;i < n; i ++){
        if(n%i == 0){
            x = 0;
            break;
        }
    }
    if (x==0){
        cout<<n<<" Not a  Prime";

    }
    else{
        cout<<n<<" is Prime";
    }
    return 0;
}   
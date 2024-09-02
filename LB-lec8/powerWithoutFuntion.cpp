#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two first the number and second its power that you want to calculate number"<<endl;
    cin>>a>>b;
    int power = a;
    for (int i = 1; i<b;i++){
        
        power = power * a;
    }
     cout<<power;
    return 0;
}
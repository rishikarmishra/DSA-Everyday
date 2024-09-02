#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number "<<endl;
    cin>>n;

    cout<<"Printing Number from 1 to n "<<endl;
    int  i = 1;
    for(; ;){
        if (i <= n){
            cout<<i <<endl;
        }
        else{
            break;
        }
        i++;
    }
    return 0;
}
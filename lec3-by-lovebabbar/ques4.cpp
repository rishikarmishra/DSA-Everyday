//prime or not 
#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int i = 2;
    while(i<n){
        if (n%i == 0){
            cout<<n<<" not prime ";
        }
        else {
            cout<<n<<" is prime ";

        }
        i++;
    }
    return 0;
}
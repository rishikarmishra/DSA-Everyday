#include<iostream>
using namespace std;
int factorial(int num){
     int ans = 1;
    for(int i =1;i<=num;i++){
        ans = ans * i;
    }
    return ans;
}
int combination (int n,int r){
     int numerator = factorial(n);
     int denominator = factorial(r) * factorial(n-r); 
     return numerator/denominator;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int r;
    cout<<"Enter the value of r "<<endl;
    cin>>r;
      cout<<"value of combination is "<<combination(n,r);

    return 0;
}
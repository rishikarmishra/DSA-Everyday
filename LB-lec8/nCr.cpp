#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1;i<=n;i++){
        fact = fact * i ;
    }
    return fact;

}
int nCr(int n ,int r){
    int num = factorial(n);
    int deno = factorial(r)*factorial(n-r);
    return num/deno;
}
int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int r;
  cout<<"Enter the value of r"<<endl;
  cin>>r;
  cout<<"value of combination is "<<nCr(n,r);
    return 0;
}
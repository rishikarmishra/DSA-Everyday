#include<iostream>
using namespace std;
int power(){
    int num1 ,num2;
    cin>>num1>>num2;
    
    int ans = num1;
    for (int i = 1; i < num2;i++ ){
        ans = ans * num1;
    }
    return ans;
}
int main(){
    
    //int ans = power();
    // int answer = power(a,b);
     cout<<"Answer is "<<power()<<endl;
     cout<<"Answer is "<<power()<<endl;
     cout<<"Answer is "<<power()<<endl;
    return 0;
}
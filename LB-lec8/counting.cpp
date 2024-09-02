#include<iostream>
using namespace std;
void counting(int n){
    for(int i =0;i <=n;i++){
        cout<< i <<endl;
    }
}
int main(){
    int num;
    cout<<"Enter a NUmber "<<endl;
    cin>>num;

    counting(num);
    return 0;
}
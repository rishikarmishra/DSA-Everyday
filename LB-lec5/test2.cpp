#include<iostream>
using namespace std;

int main(){
    for(int i = 0;i<5;i++){
        for(int j=i;i<=5;j++){
            cout<<i<<" "<<j;
            if(i+j==10){
                break;
            }
        }
    }
    return 0;
}
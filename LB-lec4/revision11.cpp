#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    //char value = 'A';
    while(i <= n){
        int j = 1;
        while (j <= i ){
            char value = 'A';
            cout<<value;
            value++;
            j++;
    }
    cout<<endl;
    i++;
    }
    return 0;
};
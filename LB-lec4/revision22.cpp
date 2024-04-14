#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
   
    while(i <= n){
        int j = 1;
        while(j <= (n-i+1)){
            cout<<j;
            j++;
        }
        int value = i-1;
         while(value ){
            cout<<"*";
            value--;
         }
            int space1 = i-1;
          while (space1){
            cout<<"*";
            space1--;
          }
          int last = 1;
          int leo = n-i+1;
          while(last<=(n-i+1)){
            cout<<leo;
            leo--;
            last++;
          }
        cout<<endl;
        i++;

    }
    return 0;
}
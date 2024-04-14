#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
   
    while(i <= n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j = 1;
        
        while (j <= i){
            cout<<j;
            //value ++;
            j++;
        } 
         int value = i-1;
         while(value ){
            cout<<value;
            value--;
         }
         
        cout<<endl;
        i++;

    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char value = 'A';
    int row = 1;
    while(row<=n){
        
        int col = 1;
        while(col <= row){
          cout<<value;
          value++;
          col++;   
        }
        cout<<endl;
        row++;
    }
    return 0;
}
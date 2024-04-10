#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        int col = n;
        while(col<=row){
            int star = n-1;
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}   
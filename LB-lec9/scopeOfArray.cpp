#include<iostream>
using namespace std;
    int updateArray( int arr[],int size){
        cout<<"Printint the Updated Array ";
        arr[0] = 120;
     for(int i = 0;i<size;i++){
        cout<<arr[i];
     } 
    }
int main(){
    int arr[3] = {12,14,-18};

    updateArray( arr, 3);
    
     cout<<"Printing the array in main";
     for(int i = 0;i<3;i++){
        cout<<arr[i];
     } 
    return 0;
}
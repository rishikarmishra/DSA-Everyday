#include<iostream>
using namespace std;
 bool search(int arr[],int size,int key){
    for (int i = 0 ;i<size;i++){
        if(arr[i] == key){
             //cout<<i;
            return i;
        }
        
    }
    return 0;
 }
int main(){
    int arr[10] = {5,6,7,8,12,34,0,56,10,1};
    int key; 
    cout<<"The key you want to search"<<endl;
    cin>>key;

    search(arr,10,key);
    bool found = search (arr,10,key);
    if(found ){
        cout<<key<<" that you entered is present inside the array"<<endl;

    }
    else{
        cout<<key<<" is not present inside the array";
    }

    return 0;
}
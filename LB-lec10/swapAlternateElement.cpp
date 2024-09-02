#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i = 0;i<size; i = i + 2){
        if (i + 1 <size){
            swap(arr[i],arr[i+1]);
        }
    }

}
int main(){
    int odd[7] = {2,5,7,23,81,92,0};
    int even [8] = {2,5,7,23,81,92,0,10};
    swapAlternate(odd,7);
    swapAlternate(even,8);
    cout<<endl;
    printArray(odd,7);
    printArray(even,8);
    return 0;
}
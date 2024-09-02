#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int number [15];
    cout<<"Value of index "<<number[14]<<endl;
    int second[3] = {3,5,11};
    cout<<"Value of index "<<second[2];
    int third[5] = {2,7};
    int n = 5;
    cout<<"Third ";

    printArray(third,5);
    cout<<"forth";
    int forth[10] = {0};
    n = 10;
    printArray(forth,10);

    cout<<"fifth";
    int fifth[10] = {1};
    n = 10;
    printArray(fifth,10);

    return 0;
}
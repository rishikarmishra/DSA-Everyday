#include<iostream>
using namespace std;
int arraySearch(int arr[],int n,int key){
for(int i = 0 ;i < n;i++){
        if (arr[i] == key){
            return i;
        }
    }
   return 0; 
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the element of array with size "<<n<<endl;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int keyValue ;
    cout<<"Enter the value of key"<<endl;
    cin>>keyValue;
    int result = arraySearch(arr,n,keyValue);
    if(result){
        cout<<"key is founded at index "<<result;
    }
    else{
        cout<<"Not founded"<<endl;
    }
    return 0;
}
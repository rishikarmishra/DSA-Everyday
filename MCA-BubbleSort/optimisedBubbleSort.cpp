#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    int n;
    cout<<"Enter the Size of Array";
    cin>>n;
    cout<<"Enter the Element of Array";
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for (int i =0;i<=n;i++){
        bool flag = false;
        for(int j =0;j<=n-i-1;j++){
            if( arr[j] >arr[j +1]){
            swap(arr[j],arr[j+1]);
            flag= true;
        }
        }
        if (flag == false);
        break;3
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    
    return 0;
}
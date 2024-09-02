#include<iostream>
using namespace std;
int Recursive(int arr[],int size,int key)
{
    if(arr[size]==key)
    {
    return size;
    }
    else if(size==0)
    {
    return 0;
    }
    else
    {
    Recursive(arr,size-1,key);
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key value: "<<endl;
    cin>>key;
    int res=Recursive(arr,n-1,key);
     if(res)
    {
        cout<<"Key founded at index no: "<<res<<endl;
    }
    else
    {
        cout<<"Key not founded!!!"<<endl;
    }
    return 0;
}
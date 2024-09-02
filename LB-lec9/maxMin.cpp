#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,num[i]);
        int a = 5;
    //    if (num[i]>max)
    //    {
    //      max = num[i];
    //    }
       
    }
   return maxi; 
}

int main(){
    int size ;
    cin>>size;

    int num [100];
    for(int i = 0;i<size;i++){
        cin>>num[i];

    }

    cout<<"Max value is  "<< getmax(num,size)<<endl;
    return 0;
}
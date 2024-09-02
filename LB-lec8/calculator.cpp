#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter the First Value to be Calculated "<<endl;
    cin>>a;
    int b ;
    cout<<"Enter the Second Value that you want to be Calculated"<<endl;
    cin>>b;

    char operation;
    cout<<"Enter the operation that you want to perform "<<endl;
    cin>>operation;

    switch(operation){
        case('+') : cout<<a+b;
        break;
         case('-') : cout<<a-b;
            break;              
         case('*') : cout<<a*b;
            break;
         case('/') : cout<<a/b;
            break;
         case('%') : cout<<(a/100) * b;
            break;
         default: cout<<"Operation is Wrong";
            break;
        }
      return 0;
 
    }
    
#include<iostream>
using namespace std;
 int numberOfsetBit(int num ){
    int count = 0;
    for(;num>0;num = num>>1){
         count = count +( num & 1);

    }
    return count;
 }
int main(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
     int totalSetBits =numberOfsetBit(a) + numberOfsetBit(b);
    cout << "Total number of set bits in a and b is: " << totalSetBits << endl;
}
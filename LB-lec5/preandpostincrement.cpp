#include<iostream>
using namespace std;

int main(){
    int i = 2 , a = 2;
    int  sum = a + (i++);
    int  sum2 = a + i;
    cout<<sum<<endl;
    cout<<sum2;
    return 0;
}
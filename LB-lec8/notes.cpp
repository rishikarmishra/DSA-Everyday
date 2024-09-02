#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount that you want to calculate for "<<endl;
    cin>>amount;
    int orignalAmount = amount;
    int num = 1 ;
    int notes = 0;
    
    switch (num)
    {
    case 1: notes = amount /100;
        amount = amount - (100 * notes);
        cout<<"the number of 100 rs notes required for "<<orignalAmount<<" is "<<notes<<endl;
    case 2: notes = amount /50;
        amount = amount - (50 * notes);
        cout<<"The Number of 50 rs notes required for the "<<orignalAmount<<" is"<<notes<<endl;
       
    case 3: notes = amount /20;
        amount = amount - (20 * notes);
        cout<<"The Number of 20 rs notes required for the "<<orignalAmount<<" is"<<notes<<endl;
        
    case 4: notes = amount /10;
        amount = amount - (10 * notes);
        cout<<"The Number of 10 rs notes required for the "<<orignalAmount<<" is"<<notes<<endl;
        
    case 5: notes = amount /1;
        amount = amount - (1 * notes);
        cout<<"The Number of 1 rs notes required for the "<<orignalAmount<<" is"<<notes<<endl;
        
    
    default:
        break;
    }
    return 0;
}

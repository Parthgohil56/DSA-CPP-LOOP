#include<iostream>
using namespace std;
main(){
    int n,count=0;
    cout<<"Enter any Number:";
    cin>>n;
    do{
        n/=10;
        count++;
    }while(n!=0);
    cout<<"Number of Digit = "<<count;
}
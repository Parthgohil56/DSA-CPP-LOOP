#include<iostream>
using namespace std;
main(){
    int num,first;
    cout<<"Enter Any Number : ";
    cin>>num;
    first=num;
    int last=num%10;
    while(first>=10){
        first=first/10;
    }
    int sum = first + last;
    cout<<"First Digit = "<<first<<endl;
    cout<<"Last Digit = "<<last<<endl;
    cout<<"The Value is = "<<sum;
}
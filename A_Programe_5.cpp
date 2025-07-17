#include<iostream>
using namespace std;
main(){
    char abc='a';
    do{
        cout<<abc<<" ";
        abc+=4;
    }while(abc>=0);
}
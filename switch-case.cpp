#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Input age from 1-3 : ";
    cin>>a;
    switch(a){
        case 1 :
           cout<<"You are eligible";
            break;
        case 2 :
            cout<<"You are not eligible";
            break;
        case 3 : 
            cout<<"you are 18";
            break;
        default :
        cout<<"no";
        break;
    }
}
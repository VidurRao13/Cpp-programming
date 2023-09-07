#include<iostream>
using namespace std;

int main(){
    int x = 7;
    int* y;
    y = &x;
    cout<<"value of x : "<<&x<<endl;
    cout<<"value of y : "<<y;
}
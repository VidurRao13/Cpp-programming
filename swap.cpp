#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int x,y;
    x = 20;
    y = 15;
    cout<<"value of x : "<<x<<endl<<"value of y : "<<y<<endl;
    swap(x,y);
    cout<<"value of x now : "<<x<<endl<<"value of y now : "<<y;
}
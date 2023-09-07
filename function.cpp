#include<iostream>
using namespace std;

int multiply(int a, int b){
    int c = a * b;
    return c;
}
//above (int a, int b) are formal arguments
int main(){
    int x,y;
    cout<<"enter the first no : ";
    cin>>x;
    cout<<"enter second no : ";
    cin>>y;
    cout<<"the product is : "<<multiply(x, y);
}
// above (x, y) are actual arguments.
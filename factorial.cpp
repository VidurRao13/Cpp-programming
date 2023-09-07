#include<iostream>
using namespace std;

int factorial(int x){
    if(x<=1){
        return 1;
    }    
    return (x * factorial(x-1));
}

int main(){
    int a;
    cout<<"input value of a : ";
    cin>>a;
    cout<<"factorial of "<<a<<" is "<<factorial(a)<<endl;
}

//this is done through recursion
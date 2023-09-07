#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    void normalno(void);
    void imaginaryno(void);
    void displayno(void);
};

void complex :: normalno(void){
    cout<<"enter normal integer no : ";
    cin>>a;
}

void complex :: imaginaryno(void){
    cout<<"enter imaginary no : ";
    cin>>b;
}

void complex :: displayno(void){
    cout<<"The complex no. is  : "<<a<<" + "<<b<<'i'<<endl;
}

int main(){
    int x;
    cout<<"enter how many times u want to input complex no : ";
    cin>>x;
    complex no[x];
    for (int i = 0; i < x; i++){
        no[i].normalno();
        no[i].imaginaryno();
    }
    for (int y = 0; y < x ; y++){
        no[y].displayno();
    }
}
#include<iostream>
using namespace std;

class Y;

class X{
    int a = 0;
    public:
    void value(int integer1){
        a = integer1;
    }
    friend void displayno(X, Y);
    friend void exchange(X &, Y &);
};

class Y{
    int b = 0;
    public:
    void value2(int integer2){
        b = integer2;
    }
    friend void displayno(X, Y);
    friend void exchange(X &, Y &);
};

void displayno(X o1, Y o2){
    cout<<"Value before exchange of A are : "<<o1.a<<" and B : "<<o2.b<<endl;
}

void exchange(X &m, Y &n){
    int c = m.a;
    m.a = n.b;
    n.b = c;
    cout<<"Exchanged values are A : "<<m.a<<" and B : "<<n.b<<endl;
}

int main(){
    X no1;
    Y no2;
    int c,v;
    cout<<"Enter no. 1 : ";
    cin>>c;
    cout<<"Enter no. 2 : ";
    cin>>v;
    no1.value(c);
    no2.value2(v);
    displayno(no1, no2);
    exchange(no1, no2);
    return 0;
}
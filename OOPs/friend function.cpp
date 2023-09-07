#include<iostream>
using namespace std;

//garbage value coming.

class Y; 

class X{
    int a;
    public :
    void setvalue(int value){
        a = value;
    }
    friend void add(X, Y);
};

class Y{
    int b;
    public:
    void setvalue(int value){
        b = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"The sum is : "<<o1.a + o2.b;
}

int main(){
    X a1;
    a1.setvalue(9);
    Y b1;
    b1.setvalue(3);
    add(a1, b1);
    return 0;
}
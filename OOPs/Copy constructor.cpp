#include<iostream>
using namespace std;

class Alpha{
    int a;
    public :
    Alpha(){}
    
    Alpha(int b){
        a = b;
    }
    Alpha(Alpha &obj){
        cout<<"Cpoy constructor called";
        a = obj.a;
    }
    void giveoutput(){
        cout<<"Value is : "<<a<<endl;
    }
};

int main(){
    Alpha d, g, h;
    d = {45};
    g = {4};
    d.giveoutput();
    g.giveoutput();
    h.giveoutput();

    Alpha d1(d);
    d1.giveoutput();
    Alpha g1(g);
    g1.giveoutput();

    Alpha vidur(d);
    vidur.giveoutput();

    // call copy contructor as many times as you want in main function, we only have to define copy constructor once within class.
}
#include<iostream>
using namespace std;

class complexno{
    int normal, complex;
    public :
    complexno(int normal, int complex);
    complexno(int normal);
};

complexno :: complexno(int normal, int complex){
    //this -> normal = normal;
    //this -> complex = complex;
    cout<<"The complex number is : "<<normal<<" + "<<complex<<"i"<<endl;
}

complexno :: complexno(int normal){
    cout<<"The normal number entered is : "<<normal;
}

int main(){
    int normal, complex;
    cout<<"Enter the normal no : ";
    cin>>normal;
    cout<<"Enter the complex no : ";
    cin>>complex;
    complexno new1(normal, complex);

    cout<<"Enter a simple integer number : ";
    cin>>normal;
    complexno new2(normal);
}
#include<iostream>
using namespace std;

class phone{
    int imeino;
    public:
    string mobilename;
    int mobileno;
    phone(int imeino, string mobilename, int mobileno);
    void displayno(void);
};

    phone :: phone(int imeino, string mobilename, int mobileno){
    this -> imeino = imeino;
    this -> mobilename = mobilename;
    this -> mobileno = mobileno;
}

void phone :: displayno(void){
    cout<<"Your IMEI no : "<<imeino<<endl;
    cout<<"Name of mobile is : "<<mobilename<<endl;
    cout<<"Your mobile no is : "<<mobileno<<endl;
}

int main(){
    int imeino, mobileno;
    string mobilename;

    cout<<"Enter IMEI Number : ";
    cin>>imeino;
    cout<<"Enter name of your mobile : ";
    cin>>mobilename;
    cout<<"Enter your mobile number : ";
    cin>>mobileno;

    phone vidur(imeino, mobilename, mobileno);
    vidur.displayno();
}
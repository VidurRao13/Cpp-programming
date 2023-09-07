#include<iostream>
using namespace std;

//constructor is a special member function with same name as of the class.
// it is used to initalize objects of its class.
// it is automatically invoked or called whenever an object is created.


class Cars{
    int noplate;
    int licenseno;
    public :
    string model;
    string carname;
    void show();
    Cars(int noplate, int licenseno, string model, string carname);
    
};

Cars :: Cars(int noplate, int licenseno, string model, string carname){
    this->noplate=noplate;
    this->licenseno=licenseno;
    this->model=model;
    this -> carname=carname;
}
void Cars :: show(){
    cout<<"Number plate is : "<<noplate<<endl;
    cout<<"Licence no is : "<<licenseno<<endl;
    cout<<"Model name is : "<<model<<endl;
    cout<<"Name of car is : "<<carname<<endl;
}

int main(){
    int noplate, licenseno;
    string carname, model;
    cout<<"Enter number plate : "<<endl;
    cin>>noplate;
    cout<<"Enter license number  : "<<endl;
    cin>>licenseno;
    cout<<"Enter name of car : "<<endl;
    cin>>carname;
    cout<<"Enter model name : "<<endl;
    cin>>model;
    Cars suzuki(noplate, licenseno, model, carname);
    suzuki.show();
}

/*characteristics of constructor :-
1. It should be declared in public section of class only.
2. They are automatically invoked.
3. They cant have return values.
4. It can have default arguements.
5. We cant refer to their address.*/
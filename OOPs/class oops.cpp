#include<iostream>
using namespace std;

class student{
    private : 
    int marks;
    char gender;
    
    public :
    char name;
    int roll;
    
    void setdata(int a, char b){
        marks = a;
        gender = b;
    }

    void getdata(char name, int roll){
        cout<<"Initial of name is : "<<name<<endl;
        cout<<"Roll No. is : "<<roll<<endl;
        cout<<"Marks are : "<<marks<<endl;
        cout<<"Gender is : "<<gender<<endl;
    }
};

int main(){
    student vidur;
    vidur.name = 'v';
    vidur.roll = 77;
    vidur.setdata(95, 'M');
    vidur.getdata('v', 77);
}
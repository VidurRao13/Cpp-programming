#include<iostream>
using namespace std;

struct student{
    int rollno;
    char name;
    float marks;
};

int main(){
    struct student vidur;
    vidur.rollno =77;
    vidur.name = 'v';
    vidur.marks = 95.32;

    cout<<vidur.rollno<<endl;
    cout<<vidur.name<<endl;
    cout<<vidur.marks<<endl;

    struct student chauhan;
    chauhan.rollno = 44;
    chauhan.name = 'c';
    chauhan.marks = 92.56;
    
    cout<<chauhan.rollno<<endl;
    cout<<chauhan.name<<endl;
    cout<<chauhan.marks<<endl;

}
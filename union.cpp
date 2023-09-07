#include<iostream>
using namespace std;

union student{
    int rollno;
    char name;
    float marks;
};

int main(){
    union student vidur;
    vidur.rollno = 77;
    vidur.name = 'v';

    //cout<<vidur.rollno<<endl;

    cout<<vidur.name<<endl;   
    //if we use  cout<<vidur.rollno  after writing vidur.name = 'v'  then we get garbage value. but if we use cout<<vidur.name  then we get correct value i.e. 'v'.
    // union is like a structure only but instead of using all values, we can only use one at a time. if we use more values then it gives garbage value.
}
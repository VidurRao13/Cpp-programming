#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
    void setid(void);
    void inputsalary(void);
    void getsalary(void);
};

void Employee :: setid(void){
    cout<<"Enter ID of employee : ";
    cin>>id;
}

void Employee :: inputsalary(void){
    cout<<"Input the salary recieved by the employee : ";
    cin>>salary;
}

void Employee :: getsalary(void){
    cout<<"The salary of ID : "<<id<<" is : "<<salary<<endl;
}

int main(){
    Employee fb[4];
    for (int i = 0; i < 4; i++){
        fb[i].setid();
        fb[i].inputsalary();
    }
    for (int a = 0; a < 4; a++)
    {
        fb[a].getsalary();
    }
}
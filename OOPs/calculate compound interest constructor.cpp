#include<iostream>
using namespace std;

class bank{
    float interestrate;
    int principal;
    float returnval;
    int years;
    
    public:
    bank(int principal, int years, float interestrate);
    float getreturn();
};

bank :: bank(int principal, int years, float interestrate){
    this->principal = principal;
    this->years = years;
    this->interestrate = interestrate;
    returnval = principal; // Initialize returnval to principal
    cout<<"Principal value : "<<principal<<endl;
    cout<<"Years for which amount is deposited : "<<years<<endl;
    cout<<"Interest rate is : "<<interestrate<<endl;
}

float bank :: getreturn(){
    interestrate = interestrate / 100;
    for( int i = 0; i < years; i++){ 
    returnval = returnval * (1 + interestrate); // Calculate compound interest
    }
    return returnval;
}

int main(){
    int principal, years;
    float interestrate;
    cout<<"Enter principal value : ";
    cin>>principal;
    cout<<"Enter number of years to be deposited : ";
    cin>>years;
    cout<<"Enter Interest rate : ";
    cin>>interestrate;
    bank vidur(principal, years, interestrate);
    cout<<"Final amount : "<<vidur.getreturn()<<endl;
}
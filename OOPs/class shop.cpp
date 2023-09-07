#include<iostream>
using namespace std;

// Implement search price function -- input item id and then code searches the item price (after searching topic).


class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initiateCounter(void){counter = 0;}
    void setPrice(void);
    void getPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter the Id of item : ";
    cin>>itemId[counter];
    cout<<"Enter the item price : ";
    cin>>itemPrice[counter];
    counter++;
}

void shop :: getPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of ItemId "<<itemId[i]<<" is : "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    int b;
    cout<<"Enter how many items u want to input : ";
    cin>>b;
    shop dukaan;
    dukaan.initiateCounter();
    for (int i = 0; i < b; i++){
       dukaan.setPrice();
    }
    dukaan.getPrice();
}
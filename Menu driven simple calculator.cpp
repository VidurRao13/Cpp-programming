#include<iostream>
using namespace std;

int add(float a, float b){
    return (a+b);
}
int subtract(int a, int b){
    return (a-b);
}
int multiply(int a, int b){
    return (a*b);
}
float divide(float a, float b){
    return (a/b);
}

int main(){
    int a,x,y;
    cout<<"Enter value of no. 1 : ";
    cin>>x;
    cout<<"Enter value of no. 2 : ";
    cin>>y;
    cout<<"Enter the no. according to your work"<<endl;
    cout<<"Press 1 for add, 2 for subtract, 3 for multiply, 4 for divide : ";
    cin>>a;
    switch(a){
        case 1 : 
        cout<<"Result is : "<<add(x,y);
        break;
        
        case 2:
        cout<<"Result is : "<<subtract(x,y);
        break;

        case 3:
        cout<<"Result is : "<<multiply(x,y);
        break;

        case 4:
        cout<<"Result is : "<<divide(x,y);
        break;

        default:
        cout<<"Wrong input";
        break;
    }

    /*if(a==1){
        cout<<add(x,y);
    }
    else if(a==2){
        cout<<subtract(x,y);
    }
    else if(a==3){
        cout<<multiply(x,y);
    }
    else if(a==4){
        cout<<divide(x,y);
    }
    else{
        cout<<"wrong input";
    }*/
}
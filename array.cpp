#include<iostream>
using namespace std;

int main(){
   int marks[5] = {44, 90, 82, 77, 58};

   //normal method to print elements :--
   /*cout<<marks[4]<<endl;
   cout<<marks[3]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[0]<<endl;*/

   //we can change elements even afterwards :--
    marks[2] = 85;
    
    //after we change, we have to give print statement or command again for change to appear on screen.

    //using for loop :--
    /*for (int i=0; i<=4; i++){
        cout<<marks[i]<<endl;
    }*/

    //using while loop :--
    //int i=0;
    /*while(i<=4){
        cout<<marks[i]<<endl;
        i++;
    }*/
    
    //using do while :--
    int i = 0;
    do{
        cout<<marks[i]<<endl;
        i++;
    }
    while(i<=4);
}
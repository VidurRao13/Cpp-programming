#include<iostream>
#include<string>
using namespace std;


class binary{
    string a;
    bool isBinary = false;
    
    
    public:
    void read(void);
    void check_bin(void);
};

void binary :: read(void){
    cout<<"Enter the number : ";
    cin>>a;
}

void binary :: check_bin(void){
    for (int i = 0; i < a.length(); i++){
        if(a.at(i) == '0' || a.at(i) == '1'){
            isBinary = true;
        }
        else{
            isBinary = false; 
            break;
        }
    }
    if(isBinary){
        cout<<"No is binary";
    }
    else{
        cout<<"no is not binary";
    }
}

// better method down :
/*void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}*/

int main(){
    binary b;
    b.read();
    b.check_bin();
}
#include<iostream>
using namespace std;

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    return 0;
}

//enum give integer values to given set of things like { breakfast, lunch, dinner} given above. it gives value as breakfast = 0, lunch = 1, dinner = 2.
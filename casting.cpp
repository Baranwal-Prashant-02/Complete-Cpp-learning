#include <iostream>
using namespace std;

int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    //or// int roundedTeaPrice = teaPrice; both behaves same
    cout << roundedTeaPrice << endl; //49

    int teaQuantity = 2; 
    //int totalPrice = teaPrice * teaQuantity; //99
    double totalPrice = teaPrice * teaQuantity; //99.98
    cout << totalPrice << endl;

    return 0;
}
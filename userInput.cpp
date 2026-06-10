#include<iostream>
#include<string>
using namespace std;
int main(){
    string userTea;
    int teaQuantity;
    cout<<"what would you like to order in tea?"<<endl;
    getline(cin, userTea); // take input and store in userTea

    cout<<"enter the quantity of : "<<userTea<<endl;
    cin>>teaQuantity;
    cout<<teaQuantity<<" ";
    cout<<userTea<<endl;
    return 0;
}
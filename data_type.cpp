#include<iostream>
using namespace std;
int main(){
    int chai = 30;
    float temperature = 37.87;
    double price = 50.88778;
    char grade = 'A';
    bool isReady = 5;
    cout<< chai<<endl;
    cout<< temperature<<endl;
    cout<< price<<endl;
    cout<< grade<<endl;
    cout<<isReady<<endl;  // 0/1->> any of one 
    /*
    30
    37.87
    50.8878
    A
    1

    */
   cout<<"--------------------------------"<<endl;
    char ch = 'AB';
    cout<<ch<<endl;  //giving warning and print B(the last character)
    // bool empty = '';   it is(empty) not allowed in bollean
    bool example = 'A';
    cout<<example<<endl;  //1 because it consider 0 as false only not amy other char or int 
    return 0;
}

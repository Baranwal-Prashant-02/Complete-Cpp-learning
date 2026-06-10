#include <iostream>
using namespace std;
int main()
{
    int smallpack = 100;
    // int smallpack = -100;   //-100 because cpp allow -ve in int data type
    cout << smallpack << endl;
    // unsigned int small= 100;  //100
    unsigned int small = -100; // gives garbage value
    cout << small << endl;

    cout << "--------------------------------" << endl;

    return 0;
}
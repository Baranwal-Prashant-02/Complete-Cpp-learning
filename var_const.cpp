
#include<iostream>
using namespace std;
int main(){

    int shyam;  //declaration //a variable of same name are declared at once in its scope
    const int ram = 20; // initialization
    // here const keyword make variable fixed i.e. read only variable
     // ram = 98;  it throw an error because it is an const value we can't change it
      
    cout<<"hello world"<<endl;

    //or
     std::cout<<"2nd way "<<std::endl;
     return 0;
}
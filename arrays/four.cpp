//use of pointer to make sure that any function able to return an array
// here we use dynamic m/m
/*
int x = 10;
int *p;     // * used to declare pointer
p = &x;     // & gives address of x
printf("%d", *p);  // * used to access value at address
*/

//because in stack m/m after execution got completed the function and m/m spaces got cleared automatically
//but in dynamic m/m that is done mannualy so it is use to preserve the references 
//so we have to declare an array and keep the reference of m/m of array in dynamic m/m for further use
#include <iostream>
using namespace std;

int* prepareChai(int cups){
    int* order = new int[cups];  //here we use new keyword to allocate dynamic memory  and keeping the reference of m/m in integer pointer named order
    for(int i=0; i<cups; i++){
        order[i] = (i+1)*10;  //just for fun it is calculation
    }
    return order;  //it is not an array it is an reference of m/m.
}
int main(){
    int cups =5;
    int* chaiOrder=prepareChai(cups);
    for(int i=0; i<cups; i++){
        cout<<"cups: "<<i+1<<"has "<<chaiOrder[i]<<" ml\n";
    }
    delete[] chaiOrder;
    return 0;
}
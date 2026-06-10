//lamda function
#include<iostream>
using namespace std;
int main(){
    //normal function syntax
    // int hellochai(){}
    

    //lamda function syntax(nameless function)
    auto prepareChai = [](int cups){
        cout<<"preparing "<< cups <<" cups of tea"<<endl;
    };
    prepareChai(4);  //preparing 4 cups of tea


    return 0;
}
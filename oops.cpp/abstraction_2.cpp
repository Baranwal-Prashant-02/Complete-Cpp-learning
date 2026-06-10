/*Abstraction-
if any class has abstract method then it is known as abstract class and it can not be access by object
we have to override the abstract method to make object 
virtual keyword also used to make abstract method */
#include<iostream>
using namespace std;
class A{//abstract class
    public:
    virtual void logic()=0;//pure virtual fn//abstract method//0 assign for pure virtual
    void logic1()//concrete method
    {
        cout<<"logic 1"<<endl;
    }
    //void logic(){
       // cout<<"logic"<<endl;
        
    //}
};
class B:public A{//if we make object of class A without inheritance then it can not run
    public:
    void logic2(){
        cout<<"logic 2"<<endl;
    }
    void logic(){//if we not make this function for overide then this code can not run
        cout<<"logic"<<endl;
    }
};
int main(){
    B obj;
    obj.logic2();
    obj.logic1();
    obj.logic();
}
/*int main(){
    A obj;
    obj.logic1();
   obj.logic();
   }
   */

// output:
// logic 2
// logic 1
// logic
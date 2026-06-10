#include<iostream>
using namespace std;
class logic 
{
    private:
    int a,b;
    public:

  /*  logic()         default constructor
    {

    }*/
    logic()//non parameterized constructor//zero argument constructor  

    {
        cout<<"constructor"<<endl;//special method of class it has the same name as class  //default constructor ,compiler call this automatically

    }
    logic(int x,int y)//two parameterized constructor
    {
        a=x;
        b=y;
        cout<<a<<" "<<b<<" "<<"this is two parameterized constructed "<<endl;

    }
    logic(int x)
    {
        a=x;
        cout<<"this is one argument constructor"<<" "<<a<<endl;
    }
};
int main()
{
    logic obj;//implicit calling of constructor
  //   logic obj1=logic(); //explicit calling of construtor
     logic obj2(10,20);//implicit  calling of two arg constructor
  //  logic obj2=logic(20,40);//explicit calling 
    logic obj3(40);
}

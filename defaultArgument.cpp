//default argumnet can be only done on traling argument
/*
Default arguments are values assigned to function parameters that are used 
when no argument is passed during function call. Default arguments must be specified only for trailing parameters.
*/
#include<iostream>
using namespace std;
void display(int=0,int=0,int=0,int=0);//default declaration
int main()
{
    display(1,2);
    display(2,3,4);
    display(1,67,32,54);


}
void display(int a,int b,int c,int d)
{
    cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<endl;
}


/*
void display(int=2,int,int,int)  //this is wrong syntax 
void display(int=2,int=0,int=9,int=9) //this is right syntax
void display(int ,int,int=2,int)❌ Wrong Syntax                   
*/


/*
why void display(int , int , int = 2 , int = 5);  // ✔ correct
Core Rule (Must Remember)
Once a parameter gets a default value, all parameters to its RIGHT must also have default values.
This rule is called:Trailing Default Arguments Rule

*/


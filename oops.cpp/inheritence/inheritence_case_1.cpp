//simple inheritence but 
// here we inherit the base claass members and methods in public of child class 


#include<iostream>
using namespace std;
class A{
    private:
     void pLogic(){
        cout<<"base class private method called"<<endl;
     }
    public:
      void Alogic(){
        cout<<"Alogic\n";
	  }
};
class B:public A{
    private:
    void bLogic(){
        cout<<"derived class private method called"<<endl;
    }
    public:
      void Blogic(){
         cout<<"Blogic\n";
         bLogic();
         //pLogic(); //Private members of the base class are inherited as part of the object, but they are not accessible directly in the derived class.

	  }

};
int main(){
  B obj;
  obj.Blogic(); //this is not able to access the private method of base class
  obj.Alogic();
  return 0;
}

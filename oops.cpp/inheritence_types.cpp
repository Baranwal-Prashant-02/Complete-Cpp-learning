//acessability is depend upon visibility mode
// visibility mode is also known as sub inheritence(like :private,public,protected)
//constructor not inherited
//copy constructor not inherited
//operator overloading not inherited
//hybrid inheritence me main parent class yadi daymond hai to uske method ko acces nhi kar sakte hai
//parent class acessed with th help of virtual keyword like(class A:virtual public B )
//solution of dimond problem is virtual base class
//constructor called in inheritance from parent to child
//destructor called in heritance from child to parent
//constructor chaining
//destructor chaining


#include<iostream>
using namespace std;


//single inheritance
/*class A{
    protected:
    void logic(){
        cout<<"protected A"<<endl;
    }
    public:
    void logic1(){
        cout<<"public A"<<endl;
    }
};
class B:protected A{
    public:
    void logic2(){
        logic();
        logic1();
        cout<<"public B"<<endl;
    }
};
int main(){
    B obj;
   // obj.logic1();
    obj.logic2();
}*/


//multilevel inheritance
/*class A{
    protected:
    void logic(){
        cout<<"protected A"<<endl;
    }
    public:
    void logic1(){
        cout<<"public A"<<endl;
    }
};
class B:protected A{
    public:
    void logic2(){
        logic();
        logic1();
        cout<<"public B"<<endl;
    }
};
class C:protected B{
    public :
    void logic3(){
        logic2();
        cout<<"public C"<<endl;
    }
};
int main(){
    C obj;
   // obj.logic1();
    obj.logic3();
}
*/


//hierachial  inheritance
/*
class A
{
    public:
     void logic()
     {
        cout<<"logic A"<<endl;
     }
};
class B:public A
{
    public://logic()
    void logic1()
    {
        cout<<"logic1 B"<<endl;
    }
};
class C:public A{
    public://logic();
    void logic2()
    {
        cout<<"logic2 C"<<endl;

    }
};
int main()
{
    B obj;
    obj.logic();
    obj.logic1();
    C obj1;
    obj1.logic();
    obj1.logic2();

}
*/


//multipal  inheritance
/*
class A
{
    public:
    void  logic()
    {
        cout<<"logic A"<<endl;
    }
};
class B
{
    public:
    void logic1()
    {
        cout<<"logic1 B"<<endl;
    }
};
class C:public A,public B{
    public://logic(),logic1()
     void logic2()
     {
         cout<<"logic2 C"<<endl;        
     }
    
};
int main()
{
    C obj;
    obj.logic();
    obj.logic1();
    obj.logic2();   
}
*/


//hybrid inheritance
//virtual keyword says to compiler that the it depends upon you to choose the method whhich  is is having same same
/*
class A
{
    public:
      void logic()
    {
    cout<<"logic A"<<endl;
    }
};
 class B:virtual public A
{
    public://logic()
    void logic1()
    {
        cout<<"logic1 B"<<endl;
    }
};
 class C: virtual public A
{
    public://logic();
    void logic2()
    {
        cout<<"logic2 C"<<endl;
    }

};
class D:public B,public C
{
    public://logic()logic1(),logic(),logic2();
    void logic3()
    {
        cout<<"logic3 D"<<endl;
    }
};
int main()
{
    D obj;
    obj.logic();
    obj.logic1();
    obj.logic2();
    obj.logic3();
}
*/

int main(){
    return 0;
}

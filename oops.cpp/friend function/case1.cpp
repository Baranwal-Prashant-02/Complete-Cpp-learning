//Global function as friend of one class

#include<iostream>//with the help of friend function we can access the private data with the help of friend keyword before any global function
using namespace std;
//Friend function can access private data of the class that declares it(that function) as friend.
class logic {
private:
    int data1, data2;
public:
    void set() {
        cin >> data1 >> data2;
    }
    friend void global_fun();   // giving special access
};

void global_fun() {
    int n = 10;
    logic obj;
    obj.set();
    cout << obj.data1 + n << endl;   // private data accessed
    cout << obj.data2 + n << endl;  
}

int main()
{
    global_fun();
}

/*
output: here we give 5 6 as an input
5 
6

15
16
*/


// What this shows:
// global_fun is not a member of class logic
// Still it can access data1 and data2
// Because it is declared as friend
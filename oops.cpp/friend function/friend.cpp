#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
================================================================================
FRIEND FUNCTION EXAMPLE
--------------------------------------------------------------------------------
This program shows:
• How a friend function can access private data of a class
• How two objects are compared using a friend function
• Why friend is needed when data members are private
================================================================================
*/

class Chai{
private:
    // Private data members — cannot be accessed directly outside the class
    string teaName;
    int servings;

public:
    // Constructor using initializer list
    // Initializes private data when object is created
    Chai(string name, int serve) : teaName(name), servings(serve) {} //new syntax to declare parameters

    // Friend function declaration
    // Gives special permission to this function
    // It can now access private members of Chai
    friend bool compareServings(const Chai &chai1, const Chai &chai2);// function  with argument and also having special access to access private members of class

    // Const member function
    // Guarantees that it will not modify object data
    void display() const {
        cout << "Tea Name: " << teaName << endl;
    }
};

// Friend function definition (outside the class)
// Even though it is not a member, it can access private data
// ONLY because it was declared as friend
bool compareServings(const Chai &chai1, const Chai &chai2){
    // Accessing private member "servings"
    return chai1.servings > chai2.servings;
}

int main(){

    // Creating two objects using constructor
    Chai masalaChai("Masala Chai", 14);
    Chai gingerChai("Ginger Chai", 8);

    // Displaying tea names using member function
    masalaChai.display();
    gingerChai.display();

    // Calling friend function like a normal function
    // Not using dot operator because it is not a member function
    if(compareServings(masalaChai, gingerChai)){
        cout << "Masala Chai has MORE servings" << endl;
    } else {
        cout << "Masala Chai has LESS servings" << endl;
    }

    return 0;
}

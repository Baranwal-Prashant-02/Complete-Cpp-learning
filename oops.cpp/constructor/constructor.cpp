//constructor : A constructor is a special member function of a class that is 
//              automatically called when an object is created and is used to initialize data members.

/*
Why Do We Need a Constructor?
To initialize variables
To avoid garbage values
To reduce extra function calls
To ensure object is always in a valid state

Order of Constructor Execution ?
Constructor is executed once per object
Runs before any member function

Destructor (Related Concept)
A destructor frees resources when object is destroyed

~logic() {                     // implementation of destructor
    cout << "Object destroyed";
}

Same name as class
Prefixed with ~
No parameters
No return type

*/

#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //default contructor
    Chai(){
        teaName = "Unknow Tea";
        servings = 1;
        ingredients = {"Water", "Tea leaves"};
        cout << "constructor called" << endl;
    }

    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
    }

};

int main(){
    Chai defaultChai;//making object 

    defaultChai.displayChaiDetails(); //calling displayChaiDetails() to show the updated value
    return 0;
}

// constructor called
// Tea Name: Unknow Tea
// Servings: 1
// Ingredients: Water Tea leaves
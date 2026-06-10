// The copy constructor creates a deep copy by allocating separate heap memory for pointer members.
// This prevents multiple objects from sharing the same memory, avoids double deletion, and ensures safe object destruction.


#include <iostream>
#include <vector>

using namespace std;

/*
   This program demonstrates:
   1. Parameterized constructor
   2. Copy constructor (DEEP COPY)
   3. Destructor
   4. Why copy constructor is needed when dynamic memory is used
*/

class Chai {
public:
    // Pointer used to store tea name dynamically
    // Each object should have its OWN memory
    string* teaName;

    int servings;

    // vector handles its own memory safely (deep copy by default)
    vector<string> ingredients;

    // ---------------- PARAMETERIZED CONSTRUCTOR ----------------
    // Allocates memory dynamically for teaName
    // Initializes all data members
    Chai(string name, int serve, vector<string> ingr) {
        teaName = new string(name);     // dynamic allocation
        servings = serve;
        ingredients = ingr;             // vector performs deep copy
        cout << "Param constructor called" << endl;
    }

    // ---------------- COPY CONSTRUCTOR ----------------
    // Creates a NEW object using an EXISTING object
    // Performs DEEP COPY for dynamic memory
    Chai(const Chai& other) {
        teaName = new string(*other.teaName); // deep copy (new memory)
        servings = other.servings;
        ingredients = other.ingredients;      // safe copy (vector)
        cout << "Copy constructor called" << endl;
    }

    // ---------------- DESTRUCTOR ----------------
    // Frees dynamically allocated memory
    // Called automatically when object goes out of scope
    ~Chai() {
        delete teaName;    // to prevent memory leak
        cout << "Destructor called" << endl;
    }

    // ---------------- DISPLAY FUNCTION ----------------
    // Prints all tea details
    void displayChaiDetails() {
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main() {

    // Creating first object using parameterized constructor
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});

    // Creating second object using copy constructor
    // Deep copy happens here
    Chai copiedChai = lemonTea;

    // Modify original object's dynamic data
    // If shallow copy existed, copiedChai would also change
    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "Lemon Tea --------" << endl;
    lemonTea.displayChaiDetails();

    cout << "Copied Tea ---------" << endl;
    copiedChai.displayChaiDetails();

    // Destructors will be called automatically for both objects
    return 0;
}

/*
Param constructor called
Copy constructor called
Lemon Tea --------
Tea Name: Modified Lemon Tea
Servings: 2
Ingredients: Water Lemon Honey 
Copied Tea ---------
Tea Name: Lemon Tea
Servings: 2
Ingredients: Water Lemon Honey
Destructor called
Destructor called
*/

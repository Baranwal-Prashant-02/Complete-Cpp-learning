#include <iostream>
#include <vector>
using namespace std;

/*
================================================================================
DELEGATING CONSTRUCTOR
--------------------------------------------------------------------------------
• One constructor calls another constructor of the SAME class
• Introduced in C++11
• Used to avoid code duplication
• Keeps all initialization logic in one main constructor
================================================================================
*/

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // ================= DELEGATING CONSTRUCTOR =================
    /*
       This constructor does NOT initialize data itself.
       Instead, it "delegates" the work to the main constructor.

       When this is called:
       Chai(string name): Chai(name, 1, {"Water","tea leaves"}) {}

       → It calls:
         Chai(string, int, vector<string>)
    */
    Chai(string name) : Chai(name, 1, {"Water", "Tea Leaves"}) {
        // This body runs AFTER main constructor finishes
        cout << "Delegating constructor called!" << endl;
    }

    // ================= MAIN CONSTRUCTOR =================
    /*
       All real initialization happens here.
       Every other constructor should forward to this one.
    */
    Chai(string name, int serve, vector<string> ingr) {
        teaName = name;
        servings = serve;
        ingredients = ingr;

        cout << "Main Constructor called!" << endl;
    }

    // ================= DISPLAY FUNCTION =================
    void displayChaiDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main() {

    // Calls delegating constructor
    // Which internally calls main constructor
    Chai quickChai("Quick Chai");

    quickChai.displayChaiDetails();
    return 0;
}

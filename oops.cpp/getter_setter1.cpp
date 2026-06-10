/*
================================================================================
GETTER & SETTER — CORE IDEA
--------------------------------------------------------------------------------
• Getter  → reads private data
• Setter  → modifies private data
• They protect data using ENCAPSULATION
• They are called manually after object creation
• Getter has return type, Setter usually has void return type
================================================================================
*/

#include <iostream>
#include <vector>
using namespace std;

class Chai
{
private:
    // 🔒 Private data — cannot be accessed directly from main()
    string teaname;
    int servings;
    vector<string> ingredients;

public:
    // ================= DEFAULT CONSTRUCTOR =================
    // Runs automatically when object is created without arguments
    // Initializes data members with default values
    Chai(){
        teaname = "Unknown Tea";
        servings = 1;
        ingredients = {"Water", "Tea Leaves"};
    }

    // ================= PARAMETERIZED CONSTRUCTOR =================
    // Allows user to set initial values at object creation
    Chai(string name, int serve, vector<string> ingre){
        teaname = name;
        servings = serve;
        ingredients = ingre;
    }

    // ================= GETTER =================
    /*
       Purpose:
       - Reads private data
       - Returns value safely
       - Does NOT modify data
    */
    string getTeaname(){
        return teaname;   // giving read-only access
    }

    // ================= SETTER =================
    /*
       Purpose:
       - Modifies private data
       - Can apply validation / logic
       - Controls how data is changed
    */
    void setTeaname(string name){
        teaname = name;   // controlled modification
    }

    // ================= GETTER FOR SERVINGS =================
    int getServings(){
        return servings;
    }

    // ================= SETTER FOR SERVINGS =================
    void setServings(int serve){
        // Example of validation logic
        if(serve > 0){
            servings = serve;
        } else {
            cout << "Invalid servings value!" << endl;
        }
    }


        //settter for ingre

        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }

         //getter for ingre
        vector<string> getIngredients(){
            return ingredients;
        }



    // ================= DISPLAY FUNCTION =================
    // Helps to verify that getters and setters work
    void display(){
        cout << "Tea Name: " << teaname << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for(string i : ingredients){
            cout << i << " ";
        }
        cout << endl;
    }
};

int main(){

    // ================= OBJECT CREATION =================
    // Default constructor is called
    Chai chai;

    // ❌ Direct access NOT allowed:
    // chai.teaname = "Ginger Tea";  // ERROR (private data)

    // ================= USING SETTERS =================
    // Modifying private data safely
    chai.setTeaname("Ginger Tea");
    chai.setServings(3);

    // ================= USING GETTERS =================
    // Reading private data safely
    cout << "Tea from Getter: " << chai.getTeaname() << endl;
    cout << "Servings from Getter: " << chai.getServings() << endl;

    // ================= FINAL DISPLAY =================
    chai.display();

    return 0;
}

// output:
// Tea from Getter: Ginger Tea
// Servings from Getter: 3
// Tea Name: Ginger Tea
// Servings: 3
// Ingredients: Water Tea Leaves 
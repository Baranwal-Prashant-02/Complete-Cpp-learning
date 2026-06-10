#include<iostream>
#include<vector>  //for vector documentation visit "https://learn.microsoft.com/en-us/cpp/standard-library/vector-class?view=msvc-170"
using namespace std;

class Chai{   // class name must be start with capital letter  and obj must be in small letter

    public:  // if we not give any class type(public, protected, private) so by default it assumes that it is private data 

        // data members(attributes)  :"class ke andr jitne v variables hote hai unko data members boltey hai"
        string TeaName;    // name of tea
        int Servings;       // number of servings
        
        vector<string> ingredients;  //list of ingedients for tea
            
        //Member function

            void displayChaiDetails(){
                cout << "Tea Name: " << TeaName << endl;
                cout << "Servings: " << Servings << endl;
                cout << "Ingredients: " ;
                for(string ingri : ingredients){  // for ingri in ingredients
                    cout << ingri << ", ";  // print all the ingredients with comma and space seperated
                }
                cout << endl;
                cout<<"--------------  --------------------------------"<<endl;
            }

};
int main(){
    Chai chaiOne;     //1st object (instances) or copy

    chaiOne.TeaName ="lemon tea";
    chaiOne.Servings =5;
    chaiOne.ingredients ={"chaiPatti", "chini", "milk"};
    chaiOne.displayChaiDetails();

    Chai chaiTwo;    //2nd object (instances) or copy

    chaiTwo.TeaName = "Masala Chai";
    chaiTwo.Servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};
    chaiTwo.displayChaiDetails();


    return 0;
}
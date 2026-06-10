#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea = "Lemon Tea \t";  // \t give the space between two sentences
    string description = "Known as \"best\" tea";
   //  \"xyz \" ->> escape character use to ignore the quote in string and pass as token to execute as it is
    cout << favoriteTea << description << endl;

    return 0;
}
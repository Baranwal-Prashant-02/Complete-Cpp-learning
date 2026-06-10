// To take array input in C++,

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    const int SIZE = 5; // Define the size of the array
    int numbers[SIZE]; // Declare an integer array of size 5

    cout << "Enter " << SIZE << " integers:\n";

    // Loop to get input for each element
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i]; // Read input into the current element
    }

    cout << "You entered: ";
    // Loop to print the array to verify input
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    sort(numbers, numbers + 5);
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

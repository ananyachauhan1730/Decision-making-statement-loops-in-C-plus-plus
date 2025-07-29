#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout << "Numbers from 1 to 20:\n";
    int i = 1;
    while (i <= 20) {
        cout << i << " ";
        i++;
    }
    cout << "\n";

    // Part 2: 
    string correctPassword = "1234";  
    string userInput;

    cout << "\nEnter password to continue: ";
    cin >> userInput;

    while (userInput != correctPassword) {
        cout << "Wrong password! Try again: ";
        cin >> userInput;
    }

    cout << "Access granted!\n";

    return 0;
}

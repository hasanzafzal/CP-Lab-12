#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int characterCount = inputString.length();
    cout << "Number of characters in the string: " << characterCount << endl;

    return 0;
}
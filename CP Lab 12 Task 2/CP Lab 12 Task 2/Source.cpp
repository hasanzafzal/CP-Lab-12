#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int length = 0;
    for (char character : inputString) {
        length++;
    }
    cout << "Length of the string: " << length << endl;

    return 0;
}
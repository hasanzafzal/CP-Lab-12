#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to delete: ";
    cin >> ch;
    string result;
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    cout << "Original string: " << str << endl;
    cout << "String after deleting '" << ch << "': " << result << endl;

    return 0;
}
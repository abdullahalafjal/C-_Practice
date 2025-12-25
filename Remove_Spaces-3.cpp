#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '\t') {  
            result += s[i]; 
        }
    }

    cout << "String after removing white spaces: " << result << endl;

    return 0;
}

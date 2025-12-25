#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, out;
    cout << "Enter a string: ";
    getline(cin, s);

    for (char c : s) {
        if (isalnum((unsigned char)c) || isspace((unsigned char)c)) {
            out.push_back(c);
        }
    }

    cout << "Without special characters: " << out << "\n";
    return 0;
}

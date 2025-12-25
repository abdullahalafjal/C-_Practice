#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout << "Enter full name: ";
    getline(cin, name);

    bool start = true;  // at start of word

    for (char c : name) {
        if (start && isalpha((unsigned char)c)) {
            cout << (char)toupper((unsigned char)c);
            start = false;
        }
        if (c == ' ')
            start = true;
    }

    cout << "\n";
    return 0;
}

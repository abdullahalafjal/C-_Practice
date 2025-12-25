#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // length
    int len = s.length();

    // reverse
    string rev(s.rbegin(), s.rend());

    cout << "Length of string = " << len << "\n";
    cout << "Reversed string = " << rev << "\n";
    cout << "Message: String reversed successfully.\n";
    return 0;
}

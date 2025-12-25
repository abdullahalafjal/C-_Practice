#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int cnt = 0;
    for (char c : s)
        if (!isspace((unsigned char)c))
            cnt++;

    cout << "Characters (excluding whitespace) = " << cnt << "\n";
    return 0;
}

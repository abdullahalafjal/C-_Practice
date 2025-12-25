#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string over {a,b}: ";
    cin >> s;

    bool ok = true;
    if (s.empty() || s[0] != 'a') ok = false;
    else {
        size_t i = 1;
        while (i < s.size() && s[i] == 'b') i++;
        if (i != s.size()) ok = false;
    }

    cout << (ok ? "Accepted\n" : "Rejected\n");
    return 0;
}

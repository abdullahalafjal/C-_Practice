#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string over {a,b}: ";
    cin >> s;

    bool ok = true;
    int bcnt = 0;

    for (char c : s) {
        if (c != 'a' && c != 'b') {
            ok = false;
            break;
        }
        if (c == 'b') bcnt++;
    }
    if (bcnt < 2) ok = false;

    cout << (ok ? "Accepted\n" : "Rejected\n");
    return 0;
}

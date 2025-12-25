#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, w;
    cout << "Enter a string: ";
    getline(cin, s);

    map<string,int> freq;

    stringstream ss(s);
    while (ss >> w) {
        for (char &c : w)
            c = tolower((unsigned char)c);
        freq[w]++;
    }

    int mx = 0;
    for (auto &p : freq)
        mx = max(mx, p.second);

    cout << "Maximum frequency of any word = " << mx << "\n";
    return 0;
}

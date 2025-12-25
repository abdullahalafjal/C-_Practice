#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    int count = 0;

    cout << "Enter a String: ";
    getline(cin, s); 

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            count++;
        }
    }

    cout << "Number of White spaces: " << count << endl;
    return 0;
}

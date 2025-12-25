#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int vowels = 0, consonants = 0, digits = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);

        if (isalpha(ch)) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;

    return 0;
}

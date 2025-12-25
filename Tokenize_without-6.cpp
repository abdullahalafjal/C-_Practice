#include <iostream>
#include <sstream>  // for stringstream
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  

    string delimiters = " ,.-"; 
    string token = "";
    
    cout << "Tokens are:\n";

    for (int i = 0; i < input.length(); i++) {
       
        if (delimiters.find(input[i]) != string::npos) {
            if (!token.empty()) {
                cout << token << endl;
                token = ""; 
            }
        } else {
            token += input[i];  
        }
    }

    if (!token.empty()) {
        cout << token << endl;
    }

    return 0;
}

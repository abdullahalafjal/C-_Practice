#include <iostream>
#include <cstring>  // for strtok
using namespace std;

int main() {
    char str[200];

    cout << "Enter a string: ";
    cin.getline(str, sizeof(str)); 

    const char delimiters[] = " ,.-"; 

    
    char* token = strtok(str, delimiters);

    cout << "Tokens are:\n";
    while (token != nullptr) {
        cout << token << endl;         
        token = strtok(nullptr, delimiters); 
    }

    return 0;
}

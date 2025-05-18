#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    // Remove spaces and convert to lowercase
    string clean_str = "";
    for(char c : str) {
        if(!isspace(c)) {
            clean_str += tolower(c);
        }
    }
    
    // Create a reversed copy of the string
    string reversed = clean_str;
    reverse(reversed.begin(), reversed.end());
    
    // Compare original with reversed
    return (clean_str == reversed);
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    if(isPalindrome(input))
        cout << "\"" << input << "\" is a palindrome." << endl;
    else
        cout << "\"" << input << "\" is not a palindrome." << endl;
        
    return 0;
}

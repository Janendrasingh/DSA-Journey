
//Vowel or Consonant using Switch Case

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    // Convert uppercase letters to lowercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "The character is a Vowel.";
            break;

        default:
            if (ch >= 'a' && ch <= 'z')
                cout << "The character is a Consonant.";
            else
                cout << "Invalid input! Please enter an alphabet.";
    }

    return 0;
}

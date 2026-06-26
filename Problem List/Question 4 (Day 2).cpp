
//Write a program to check if a character is a vowel or consonant

#include <bits/stdc++.h>
using namespace std;

void checkCharacter(char ch) {

    // Convert uppercase to lowercase
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a Vowel";
    else if ((ch >= 'a' && ch <= 'z'))
        cout << ch << " is a Consonant";
    else
        cout << "Invalid Character";
}

int main() {

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    checkCharacter(ch);

    return 0;
}

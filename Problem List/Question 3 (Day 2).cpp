
//Write a program to check if a year is a leap year

#include <bits/stdc++.h>
using namespace std;

void LeapYear(int year) {

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << year << " is a Leap Year";
    else
        cout << year << " is Not a Leap Year";
}

int main() {

    int year;

    cout << "Enter the Year: ";
    cin >> year;

    LeapYear(year);

    return 0;
}

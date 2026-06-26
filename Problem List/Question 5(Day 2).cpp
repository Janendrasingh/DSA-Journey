
//Write a program to find if a triangle is valid based on angles or sides

#include <bits/stdc++.h>
using namespace std;

void checkTriangleByAngles(int a, int b, int c) {

    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0))
        cout << "Valid Triangle";
    else
        cout << "Invalid Triangle";
}

int main() {

    int a, b, c;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    checkTriangleByAngles(a, b, c);

    return 0;
}

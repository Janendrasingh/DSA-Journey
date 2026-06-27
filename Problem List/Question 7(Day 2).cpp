
//Unit Conversion (cm?m, kg?g, etc.)

#include <iostream>
using namespace std;

void UnitConversion(int choice)
{
    double value;

    cout << "Enter the value: ";
    cin >> value;

    switch (choice)
    {
        case 1:
            cout << value << " kg = " << value * 1000 << " g";
            break;

        case 2:
            cout << value << " g = " << value / 1000 << " kg";
            break;

        case 3:
            cout << value << " m = " << value * 100 << " cm";
            break;

        case 4:
            cout << value << " cm = " << value / 100 << " m";
            break;

        default:
            cout << "Invalid choice!";
    }
}

int main()
{
    int n;

    cout << "Select the unit for conversion\n";
    cout << "1. kg to g\n";
    cout << "2. g to kg\n";
    cout << "3. m to cm\n";
    cout << "4. cm to m\n";

    cin >> n;

    UnitConversion(n);

    return 0;
}

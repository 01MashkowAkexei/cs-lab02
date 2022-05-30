#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A & B: ";
    int a, b;
    cin >> a >> b;

    cout << "A + B = " << a + b << "\n" << "A - B = " << a - b << "\n" << "A * B = " << a * b << "\n";
    cout << "A / B = " << a / b << "\n";
    if (a > b)
        cout << a << " is max" << "\n";
    else
        cout << b << " is max" << "\n";
    return 0;
}

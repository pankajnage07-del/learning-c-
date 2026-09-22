#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is greater";
        cout << "\n" << b << " is smaller";
    }
    else if (b > a)
    {
        cout << b << " is greater";
        cout << "\n" << a << " is smaller";
    }
    else
    {
        cout << "Both numbers are equal";
    }

    return 0;
}

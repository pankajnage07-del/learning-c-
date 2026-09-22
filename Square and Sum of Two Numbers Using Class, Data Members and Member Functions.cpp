#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    void square()
    {
        cout << "Square of first number = " << a * a << endl;
        cout << "Square of second number = " << b * b << endl;
    }

    void sum()
    {
        cout << "Sum of two numbers = " << a + b << endl;
    }
};

int main()
{
    Number n;

    n.input();
    n.square();
    n.sum();

    return 0;
}

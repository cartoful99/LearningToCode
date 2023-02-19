#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    a = 0;
    b = 2;
    c = 3;

    // SAU
    if (a != 0 || b != 0)
    {
        cout << (c / (a + b));
    }
    else
    {
        cout << "AMBELE 0";
    }

    if (a != 0)
    {
        cout << (c / (a + b));
    }
    else if (b != 0)
    {
        cout << (c / (a + b));
    }
    else
    {
        cout << "AMBELE 0";
    }

    // SI
    if (a != 0 && b != 0)
    {
        cout << (c / (a * b));
    }
    else
    {
        cout << " NU sunt diferite de 0";
    }

    if (a != 0)
    {
        if (b != 0)
        {
            cout << (c / (a * b));
        }
    }
    else
    {
        cout << " NU sunt diferite de 0";
    }
}
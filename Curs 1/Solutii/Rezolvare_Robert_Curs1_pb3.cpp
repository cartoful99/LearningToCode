#include <iostream>
using namespace std;

int main()
{
    int numar1, numar2, numar;

    cout << "Introdu primul numar" << endl;
    cin >> numar1;

    cout << "Introdu al doilea numar" << endl;
    cin >> numar2;

    numar = numar1 + 1;

    cout << "Toate numerele dintre acestea sunt: " << endl;
    while (numar < numar2)
    {
        cout << numar << ", ";
        numar = numar + 1;
    }

    numar = numar1 + 1;
    cout << "Doar numerele pare sunt: " << endl;
    while (numar < numar2)
    {
        if (numar % 2 == 0)
        {
            cout << numar;
        }
        numar = numar + 1;
    }
}

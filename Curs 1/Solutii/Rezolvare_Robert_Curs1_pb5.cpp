#include <iostream>
using namespace std;

int main()
{
    int numar, numar_maxim;

    cout << "Introdu un numar:" << endl;
    cin >> numar;

    numar_maxim = 0;

    while (numar != 0)
    {
        if (numar > numar_maxim)
        {
            numar_maxim = numar;
        }

        cout << "Introdu un alt numar:" << endl;
        cin >> numar;
    }

    cout << "Cel mai mare numar citit este : " << numar_maxim << endl;
}

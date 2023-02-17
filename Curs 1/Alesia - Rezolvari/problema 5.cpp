//*. Citeste numere de la tastatura pana la intalnirea numarul 0. Sa se afiseze cel mai mare numar din acest sir.
#include <iostream>
using namespace std;

int main()
{
    int numar;
    cout << "Introdu un numar:" << endl;
    cin >> numar;

    cout << "Cel mai mare numar din acest sir este:" << endl;
    cout << numar << endl;
    
    cout << "Toate numerele de la " << numar << " la 0 sunt:" << endl;
    while (numar >= 0)
    {
        cout << numar << endl;
        numar = numar - 1;
    }
    cout << "O zi buna!";
}
/*
    Programul asta functioneaza si arata in consola toate numerele de la numarul citit pana la 0. Deci functioneaza dar nu asta am cerut.
*/

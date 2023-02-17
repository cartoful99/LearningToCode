//4. Sa se citeasca un caracter de la tastura si sa se verifice daca este vocala sau nu!
#include <iostream>
using namespace std;

int main ()
{
    char caracter;
    cout << "Introdu un caracter" << endl;
    cin >> caracter;

    while (caracter == a ){
        cout << "Caracterul nu este vocala!" <<endl;

    }
    cout << "Caracterul este vocala" << endl;
}

/*
    Nu merge.
    1. Cand verifici daca o variabila este egala cu un caracter, acel caracter trebuie sa fie inconjurat de apostroafe, adica => caracter == 'a'
    2. Nu trebuie sa citesti la nesfarsit sau ceva ci doar o data si o singura data verifici de aceea ai nevoie doar de un if nu while.
    3. O ai rezolvata in folder.
*/

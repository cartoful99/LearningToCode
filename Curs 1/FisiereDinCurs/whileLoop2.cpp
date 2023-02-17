// Se citeste un caracter de la tastatura si verifica daca este identic cu s!

#include <iostream>
using namespace std;
int main()
{
    // Declar variabila de tip caracter cu numele de "caracter"
    char caracter;
    // Afiseaza ce sa introduca user ul
    cout << "Intodu un caracter : ";
    // Citeste de la tastura input ul user ului
    cin >> caracter;

    // Verifica cat timp valoarea variabile "caracter" este diferita de caracterul "s"
    while (caracter != 's')
    {
        // Afiseaza ca user ul a gresit litera
        cout << "Ai gresit litera!" << endl;

        // Ii cere user ului o litera noua sa introduca
        cout << "Intodu un caracter : ";
        cin >> caracter;
    }
    // Anunta user ul ca a nimerit litera!
    cout << "Ai nimerit litera!";
}
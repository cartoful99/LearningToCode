// Se citeste un caracter de la tastatura si verifica daca este identic cu s!

#include <iostream>
using namespace std;
int main()
{
    // Declar variabila de tip caracter cu numele de "caracter"    
    char caracter;
    //
    cout << "Intodu un caracter : ";
    cin >> caracter;

    while (caracter != 's')
    {
        cout << "Ai gresit litera!" << endl;
        
        cout << "Intodu un caracter : ";
        cin >> caracter;
    }
    cout << "Ai nimerit litera!";
}
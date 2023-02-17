// Se citeste un numar de la tastatura, si sa ase afiseze toate numerele intre 0 si el!

#include <iostream>
using namespace std;
int main()
{
    // Declar variabila de tip intreg cu numele de numar
    int numar;
    // Citest de la tastatura variabila numar
    cin >> numar;

    // Declar variabila de tip intreg "index" cu valoarea initiala 0
    int index = 0;

    // Verific cat timp "index" are o valoarea mai mica sau egala cu valoarea lui "numar"
    while (index <= numar)
    {
        // Afisez pe consola valoarea lui "index" si o virgula
        cout << index << " , ";
        // Incrementez/maresc variabila "index" cu valoarea 1
        index = index + 1;
    }
    // Afisez ca am terminat programul!
    cout << "A terminat de numarat!";
}
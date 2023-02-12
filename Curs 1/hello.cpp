// EXERCITIU : Verifica varsta de la tastatura pentru a vedea daca este major sau nu!
#include <iostream>
using namespace std;

int main()
{   
    // Declara o variabila de tip intreg cu numele de "varsta"
    int varsta;
    // Ii afiseaza user ului ce sa introduca
    cout << "Te rog introdu o varsta : ";
    // Citeste de la tastatura varsta user ului
    cin >> varsta;

    // Daca userul are peste 18 ani face prima chestie
    if(varsta >= 18){
        cout << "Da, tipa are " << varsta << " ani!";
    }
    //Altfel face chestia asta
    else{
        cout << "Nu, este mai mica de 18 ani!";
    }
}

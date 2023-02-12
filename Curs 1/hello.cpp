// EXERCITIU : Verifica varsta de la tastatura pentru a vedea daca este major sau nu!
#include <iostream>
using namespace std;

int main()
{
    int varsta;
    cout << "Te rog introdu o varsta : ";
    cin >> varsta;
    
    // =
    // + - * / %
    // > < >= <= == !=  -- operatori relationali

    if(varsta >= 18){
        cout << "Da, tipa are " << varsta << " ani!";
    }
    else{
        cout << "Nu, este mai mica de 18 ani!";
    }
}

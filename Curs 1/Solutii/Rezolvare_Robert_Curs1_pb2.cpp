#include <iostream>
using namespace std;

int main()
{
    int nr1, nr2, nr3;
    int patrat_nr1, patrat_nr2, patrat_nr3;

    cout << "Primul numar este : ";
    cin >> nr1;
    patrat_nr1 = nr1 * nr1;

    cout << "Al doilea numar este : ";
    cin >> nr2;
    patrat_nr2 = nr2 * nr2;

    cout << "Al treilea numar este : ";
    cin >> nr3;
    patrat_nr3 = nr3 * nr3;

    if(
        (patrat_nr1 + patrat_nr2 == patrat_nr3) ||
        (patrat_nr1 + patrat_nr3 == patrat_nr2) ||
        (patrat_nr2 + patrat_nr3 == patrat_nr1)
    ){
        cout << "Cele 3 numere sunt numere ce pot forma un triunghi!" << endl;
    }
    else{
        cout << "Cele 3 numere nu sunt triunghiulare" << endl;
    }
}
// 3. Se dau 2 numere de la tastatura, sa se afiseze toate numerele dintre acestea!
// 3*. Sa se afiseze toate numerele PARE dintre acestea!
#include <iostream>
using namespace std;

int main()
{
    int numar1;
    int numar2;
    
    cout << "Introdu primul numar" << endl;
    cin >> numar1;
    
    cout << "Introdu al doilea numar" << endl;
    cin >> numar2;
    
    int numar = numar1 + 1;
    cout << "Toate numerele dintre acestea sunt:" << endl;
    
    while (numar < numar2)
    {
        cout << numar << endl;
        numar = numar + 1;
    }

    cout << "Doar numerele pare sunt:" << endl;
    while (numar % 2 == 0)
    {
        cout << numar;
    }
}

/*
    Prima parte cu numerele cuprinse intre numar1 si numar2 e perfect!

    La partea cu par e o greseala totusi :
    1. Tu dupa ce termini while(numar < numar2) valoarea lui numar devine numar2 pentru ca d asta s-a oprit while-ul.
        Deci inainte sa intri in al 2 lea while trebuie sa resetezi 'numar' inapoi la 'numar1 + 1' cum ai facut tu initial.
    2. La conditia de la while trebuia sa fie la fel precum conditia de la primul while ca tu incerci sa faci cam exact ce ai facut prima data
        doar ca faci o verificare in plus.
    
    Adica ce se intampla acum e ca daca ai numar1 = 2 si numar2 = 8, numar incepe cu valoarea 3 ( pentru ca e numar1 + 1 ),
        dupa ce afiseaza toate numerele din while numar ajunge sa aiba valoarea 8. Iar cand intra in al doilea while tot ce o sa afiseze o sa fie
        numai 888888888888 pentru ca tu nu mai modifici nici variabila numar si se blocheaza acolo intr-un loop.

    Rezolvare : ( stergem de pe linia 25 pana la linia 30 )
        cout << "Doar numerele pare sunt:" << endl;
        numar = numar1 + 1;
        while(numar < numar2)
        {
            if( numar % 2 == 0 )
            {
                cout << numar << endl;
            }
            numar = numar + 1;
        }

*/

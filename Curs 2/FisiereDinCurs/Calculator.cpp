#include <iostream>
using namespace std;

// return - opreste tot codul si gata!
// break - te scoate din cel mai aproapiat structura repetitiva
// continue - iti reseteaza while ul

int main()
{
    // Nu poti efectua mai mult de 5 operatii la rand!
    int numar_repetari_maxime = 5;

    int numar1, numar2;
    char operatie;

    cout << "Alege operatie de calcul :" << endl;
    cout << "Pentru ADUNARE - tasta a" << endl;
    cout << "Pentru SCADERE - tasta s" << endl;
    cout << "Pentru INMULTIRE - tasta m" << endl;
    cout << "Pentru IMPARTIRE - tasta i" << endl;

    cout << "Pentru iesirea din calculator tasta - e" << endl;

    cout << "Operatie : ";
    cin >> operatie;

    while (operatie != 'e' && numar_repetari_maxime != 0)
    {

        if (operatie != 'a' && operatie != 's' && operatie != 'm' && operatie != 'i')
        {
            cout << "Ai gresit litera!" << endl;
            // cout << "Operatie : ";
            // cin >> operatie;
            // continue;
        }
        else
        {
            cout << "Introdu primul numar : ";
            cin >> numar1;

            cout << "Introdu al doilea numar : ";
            cin >> numar2;

            cout << "Rezultatul tau este : ";
            if (operatie == 'a')
            {
                cout << numar1 + numar2 << endl;
            }
            else if (operatie == 's')
            {
                if (numar1 < numar2)
                {
                    cout << "Scaderea trebuie sa fie strict pozitiva!" << endl;
                }
                else
                {
                    cout << numar1 - numar2 << endl;
                }
            }
            else if (operatie == 'm')
            {
                cout << numar1 * numar2 << endl;
            }
            else if (operatie == 'i')
            {
                if (numar2 == 0)
                {
                    cout << "Numartorul nu poate fi 0!" << endl;
                }
                else
                {
                    cout << numar1 / numar2 << endl;
                }
            }
        }

        cout << "Operatie : ";
        cin >> operatie;

        numar_repetari_maxime = numar_repetari_maxime - 1;

        // if (numar_repetari_maxime != 0)
        // {
        //     cout<< 'NUMERE CARACTEER DEPASITE'
        //     break;
        // }
    }

    return 0;
}
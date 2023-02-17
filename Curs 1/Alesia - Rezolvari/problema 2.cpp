// 2. Se dau 3 numere de la tastatura, sa se afiseze daca cele 3 numere pot fi laturile unui triunghi dreptunghic.

#include <iostream>
using namespace std;

int main()
{
    int nr1;
    int nr2;
    int nr3;
    cout << "Spuneti cele trei numere" << endl;
    cin >> nr1;
    cin >> nr2;
    cin >> nr3;
    int numar1 = nr1 * nr1;
    int numar2 = nr2 * nr2;
    int numar3 = nr3 * nr3;

    if (numar1 * numar2 == numar3)
    {
        cout << "Cele trei numere pot fi laturile unui triunghi dreptunghic deoarece" << endl;
        cout << nr1 << "^2*" << nr2 << "^2=" << nr3 << "^2" << endl;
        cout << numar1 << "*" << numar2 << "=" << numar3;
    }
    else
    {
        cout << "Cele trei numere nu pot fi laturile unui triunghi dreptunghic!";
    }
}

/*
    Aproape perfect doar 2 greseli :
    1. Triunghi dreptunghic <=> (nr1*nr1) + (nr2*nr2) = nr3*nr3 | adica e adunare intre numar1 si numar2
    2. Ai verificat singur caz din toate cele posibile, adica poate sa fie asa :
        - numar1 + numar2 = numar3 ( doar pe asta l-ai verificat )
        - numar1 + numar3 = numar2
        - numar2 + numar3 = numar1
        Exemplu ca sa intelegi de ce sunt 3 cazuri: considera ca se citeste de la tastatura numerele 5 3 4:
            - imi rezulta :
                - nr1 = 5, nr2 = 3, nr3 = 4.
                - numar1 = 25, numar2 = 9, numar3 = 16.
                Deci verificarea numar1 + numar2 nu este egal cu numar3! Dar numar2 + numar3 = numar1!
                Asadar din if ul tau rezulta ca cele 3 numere nu pot forma un triunghi. Dar ele formeaza totusi un triunghi.

    Rezolvare :
    1.Fie faci 3 if uri unul sub altul:
        if(numar1 + numar2 == numar3){
            CODUL TAU
        }
        else if(numar1 + numar3 == numar2){
            CODUL TAU
        }
        else if(numar2 + numar3 == numar1){
            CODUL TAU
        }
        else{
            CODUL TAU
        }
    2.Fie verifici toate 3 conditi: ( || inseamna or )
        if( (numar1 + numar2 == numar3) || (numar1 + numar3 == numar2) || (numar2 + numar3 == numar1) ){
            CODUL TAU
        }
        else{
            CODUL TAU
        }

*/

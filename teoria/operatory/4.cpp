#include <iostream>

using namespace std;

int main()
{

    cout << "OPERATORY LOGICZNE" << endl;


    // //* przyklad 1 - AND
    // int liczba_1, liczba_2;
    // bool wynik;

    // cout << "Podaj dwie liczby calkowite: " << endl;
    // cin >> liczba_1 >> liczba_2;

    // wynik = (((liczba_1 % 2) == 0) && ((liczba_2 % 2) == 0));
    // cout << "Wynik wyrazenia to: " << wynik << endl;


    //* przyklad 2 - OR
    const int PIN_1 = 1234, PIN_2 = 6789;
    int pin;
    bool dostep;

    cout << "Podaj pin: " << endl;
    cin >> pin;

    dostep = ((pin == PIN_1) || (pin == PIN_2));

    cout << "0 - NIE; 1 - TAK; TWOJ DOSTEP TO: " << dostep << endl;
    

    return 0;
}

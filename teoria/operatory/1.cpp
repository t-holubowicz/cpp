#include <iostream>

using namespace std;

int main()
{
    
    cout << "OPERATORY ARYTMETYCZNE" << endl;

    float liczba_1, liczba_2, wynik;

    cout << "Proste liczydlo" << endl;

    cout << "Podaj dwie liczby: " << endl;
    cin >> liczba_1 >> liczba_2;

    cout << "Oto twoje dzialania" << endl;

    wynik = liczba_1 + liczba_2;
    cout << "Wynik dodawania: " << wynik << endl;

    wynik = liczba_1 - liczba_2;
    cout << "Wynik odejmowania: " << wynik << endl;

    wynik = liczba_1 * liczba_2;
    cout << "Wynik mnozenia: " << wynik << endl;
    
    wynik = liczba_1 / liczba_2;
    cout << "Wynik dzielenia: " << wynik << endl;

    return 0;
}


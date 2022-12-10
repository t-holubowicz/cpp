#include <iostream>

using namespace std;

int main()
{
    
    cout << "MODULO" << endl;

    int liczba_1, liczba_2, wynik;

    cout << "Podaj dwie liczby calkowite:" << endl;
    cin >> liczba_1 >> liczba_2;
    
    wynik = liczba_1 % liczba_2;
    cout << "Wynik modulo - reszta z dzielenia: " << wynik << endl;

    return 0;
}


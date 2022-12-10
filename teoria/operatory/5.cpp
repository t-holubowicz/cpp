#include <iostream>

using namespace std;

int main()
{

    cout << "OPERATORY PRZYPISANIA" << endl;

    //* przyklad 1
    int liczba_1 = 8, liczba_2 = 3, wynik = 0;

    wynik += liczba_1 + liczba_2;
    cout << "+= " << wynik << endl; // 8 + 3 = 11

    wynik -= liczba_1;
    cout << "-= " << wynik << endl; // 11 - 8 = 3

    wynik *= liczba_2;
    cout << "*= " << wynik << endl; // 3 * 3 = 9

    wynik %= liczba_2;
    cout << "%= " << wynik << endl; // 9 % 3 = 0

}

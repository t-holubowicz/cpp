#include <iostream>

using namespace std;

int main()
{

    /*
    setlocale(LC_CTYPE, "Polish");

    string odp;

    cout << "Jak sie masz?\n";
    cin >> odp;
    cout << "Ja tez mam sie " << odp;
    */

    string dane;

    cout << "funkcja getline" << endl;
    cout << "Podaj imie i nazwisko: ";
    getline(cin, dane, '.');
    cout << dane;

    return 0;

}

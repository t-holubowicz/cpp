#include <iostream>

using namespace std;

int main()
{

    cout << "OPERATORY RELACYJNE" << endl;


    // //* przyklad 1
    // int liczba = 3;

    // cout << "Liczba przypisana: " << liczba << endl;

    // liczba++;
    // cout << "Inkremenracja: " << liczba << endl;

    // liczba--;
    // cout << "Dekrementacja: " << liczba << endl;

    // //* przyklad 2
    // int liczba = 3;

    // cout << "Liczba zadeklarowana: " << liczba << endl;

    // cout << "Liczba wyswietlona przed inkrementacja: " << liczba++ << endl;
    // cout << "Liczba po preinkrementacji: " << ++liczba << endl;
    // cout << "Ponowne wypisanie liczby po preinkrementacji: " << liczba << endl;

    //* przyklad 3
    int liczba_1, liczba_2;

    cout << "Podaj dwie liczby:" << endl;
    cin >> liczba_1 >> liczba_2;

    cout << "Rowna " << liczba_1 << " i " << liczba_2  << " : " << (liczba_1 == liczba_2) << endl;
    cout << "Mniejsza " << liczba_1 << " i " << liczba_2  << " : " << (liczba_1 < liczba_2) << endl;
    cout << "Wieksza " << liczba_1 << " i " << liczba_2  << " : " << (liczba_1 > liczba_2) << endl;
    cout << "Mniejsza rowna " << liczba_1 << " i " << liczba_2  << " : " << (liczba_1 <= liczba_2) << endl;
    cout << "Wieksza rowna " << liczba_1 << " i " << liczba_2  << " : " << (liczba_1 >= liczba_2) << endl;
    cout << "Rozna " << liczba_1 << " i " << liczba_2  << " : " << (liczba_1 != liczba_2) << endl;

    cout << "1 = PRAWDA; 2 = FALSZ" << endl;

    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    cout << "CIAGI ZNAKOW" << endl;

    /*
        Ciagi znakow mozemy przechowywac rowniez w formie tablicy
        np. char imie[9] = "Adam";
        wowczas program ciag przechowa w sposob nastepujacy
        [A, d, a, m, \0, \0, \0, \0, \0] brakujace miejsca uzupelni znak null
    */

    // // przyklad 1
    // char imie[5] = "Adam";
    // cout << imie << endl;

    // // przyklad 2
    // char imie_1[] = "Adam";
    // cout << imie_1 << endl;

    // // przyklad 3
    // char imie_2[] = {'A', 'd', 'a', 'm', '\0'};
    // cout << imie_2 << endl;

    // // przyklad 4
    // char ciag[20] = "Programowanie";
    // cout << ciag << endl;
    // cout << ciag[4] << endl;

    // // przyklad 5 - ilosc elemenow w ciagu
    // char ciag1[] = "Programowanie";
    // char ciag2[] = "Programowanie";
    // cout << sizeof(ciag1) << endl;  // + znak null
    // cout << sizeof(ciag2) << endl;

    // // przyklad 6 (wymaga biblioteke <cstring>)
    // char auto_1[20], auto_2[20];
    // cout << "Podaj nazwe auta 1: ";
    // cin >> auto_1;
    // cout << "Podaj nazwe auta 2: ";
    // cin >> auto_2;
    // cout << "Twoje auto to: " << auto_1 << ", " << auto_2 << endl;
    // strcpy(auto_2, auto_1);
    // cout << "A teraz twoje auta to: " << auto_1 << ", " << auto_2 << endl;

    // przyklad 7 (wymaga biblioteke <cstring>)
    char imie[20], nazwisko[20];
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    strcat(imie, " ");
    strcat(imie, nazwisko);
    cout << "Twoje dane to: " << imie << endl;

    return 0;
}

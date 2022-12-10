#include <iostream>

using namespace std;

int main()
{

    /*
    int oceny[6] = {1, 3, 5, 2, 6, 4};
    float cenyCiasteczek[10] = {1.25, 1.5, 1.45, 2.5, 3.45, 2.75, 3.55, 4.5, 7.23};

    cout << "ocena w indeksie na pozycji 2: " << oceny[2] << endl;
    cout << "cena ciasteczka na pozycji 1 to: " << cenyCiasteczek[0] << endl;
    cout << "cena ciasteczka na pozycji 10 to: " << cenyCiasteczek[9] << endl;
    */

    /*
    cout << "Podaj ceny czterech koszulek." << endl;
    float koszulki[4];
    cin >> koszulki[0] >> koszulki[1] >> koszulki[2] >> koszulki[3];
    cout << "Podane ceny koszulek: " << endl;
    cout << "\t" << koszulki[0] << endl;
    cout << "\t" << koszulki[1] << endl;
    cout << "\t" << koszulki[2] << endl;
    cout << "\t" << koszulki[3] << endl;
    */

    cout << "Tablica Wielowymiarowa" << endl;

    int tablica[3][4] = {14, 13, 12, 11,
                        26, 27, 28, 29,
                        32, 34, 37, 39};

    cout << "pozycja w indeksie [0] i [3] to: " << tablica[0][3] << endl;
    cout << "pozycja w indeksie [3] i [2] to: " << tablica[3][2] << endl;
    cout << "A to ciekawe. Co tu sie stalo?" << endl;

    return 0;
}

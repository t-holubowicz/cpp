#include <iostream>

using namespace std;

int main()
{

    cout << "OPERATORY BINARNE" << endl;

    // & - AND
    // | - OR
    // ^ - XOR
    // ~ - NOT
    // << - przesuniecie bitowe w lewo
    // >> - przesuniecie bitowe w prawo

    int bin_1, bin_2, wynik;
    
    bin_1 = 13; // 00001101 -- osiem bitow
    bin_2 = 7;  // 00000111 -- osiem bitow
    wynik = (bin_1 & bin_2);
    cout << wynik << endl;

    // OR
    wynik = (bin_1 | bin_2); // 00001111 -- wynikiem bedzie 15
    cout << wynik << endl;

    // XOR
    wynik = (bin_1 ^ bin_2); // 00001010 -- wynikiem bedzie 10
    cout << wynik << endl;

    // przesuniecie bitowe w lewo
    wynik = (bin_1 << 1); // 00011010 -- wynikiem bedzie 26
    cout << wynik << endl;
    
    // przesuniecie bitowe w prawo
    wynik = (bin_1 >> 1); // 00000110 -- wynikiem bedzie 6
    cout << wynik << endl;

    // negacja
    wynik = (~bin_1); //  -- wynikiem bedzie -14
    cout << wynik << endl;

    return 0;
}

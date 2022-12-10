#include <iostream>

using namespace std;

int main()
{

    cout << "OPERATOR sizeof - wielkosc obiektu" << endl;

    int a = 10;
    double b = 3.14;
    char c = 'a';
    long long int d = 303;

    // podane wyniki w bajtach
    cout << sizeof(a) << endl; // 4
    cout << sizeof(b) << endl; // 8
    cout << sizeof(c) << endl; // 1
    cout << sizeof(d) << endl; // 8

    return 0;
}

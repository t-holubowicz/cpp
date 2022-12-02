#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> liczby {4, 3, 2, 1};
    vector <char> samogloski {'a', 'o', 'i' , 'e', 'u'};

    cout << "WEKTORY" << endl;

    cout << "Liczba na pozycji 3 to: " << liczby[2] << endl;
    cout << "Ilosc elementow w wektorze liczby: " << liczby.size() << endl;

    cout << "Samogloska na pozycji 3 to: " << samogloski[2] << endl;

    liczby.push_back(21);

    cout << "Dodana liczba na pozycji 4 to: " << liczby[3] << endl;
    cout << "Ilosc elementow w wektorze po dodaniu elementu: " << liczby.size() << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_CTYPE, "Polish");

    // PYTANIA
    /*
    - Jak si� nazywasz?
    - Co tam u ciebie?
    - Ile masz lat?
    - Ile masz chromosom�w?
    - Jaki jest tw�j ulubiony kolor?
    - Jaka jest twoja ulubiona liczba ca�kowita?
    - Jakie jest imi� twojej matki?
    - Jakie jest nazwisko rodowe twojej matki?
    - Jaka jest twoja ulubiona marka samochodowa?
    - Spotkamy si� jeszcze kiedy�?
    */

    string xString;
    int xInt;


    cout << "K: Cze��." << endl;
    cin >> xString;

    cout << "K: Jak si� nazywasz?" << endl;
    cin >> xString;
    cout << "K: Mi�o ci� pozna� " << xString << ". Ja mam na imi� AMD Ryzen 5 2400G." << endl;

    cout << "K: Co tam u ciebie?" << endl;
    cin >> xString;
    cout << "K: U mnie te� " << xString << "." << endl;

    cout << "K: Ile masz lat?" << endl;
    cin >> xInt;
    cout << "K: Ja te� mam " << xInt << " lat." << endl;

    cout << "K: Ile masz chromosom�w?" << endl;
    cin >> xInt;
    cout << "K: A ja mam " << xInt + 1 << " chromosom�w." << endl;

    cout << "K: Jaki jest tw�j ulubiony kolor?" << endl;
    cin >> xString;
    cout << "K: Moim te� ulubionym kolorem jest " << xString << "." << endl;

    cout << "K: Jaka jest twoja ulubiona liczba ca�kowita?" << endl;
    cin >> xInt;
    cout << "K: Twoja ulubiona liczba ca�kowita to " << xInt << ", a moja to kwadrat twojej liczby " << xInt*xInt << "." << endl;

    cout << "K: Jakie jest imi� twojej matki?" << endl;
    cin >> xString;
    cout << "K: Hmm... Serio ma na imi� " << xString << "?" << endl;
    cin >> xString;
    cout << "K: Okej." << endl;

    cout << "K: Jakie jest nazwisko rodowe twojej matki?" << endl;
    cin >> xString;
    cout << "K: Niewiedzia�em �e mia�a na nazwisko " << xString << "." << endl;

    cout << "K: Jaka jest twoja ulubiona marka samochodowa?" << endl;
    cin >> xString;
    cout << "K: Moja to Pontiac, ale " << xString << " te� jest ok." << endl;

    cout << "K: Spotkamy si� jeszcze kiedy�?" << endl;
    cin >> xString;
    if(xString == "Tak" || xString == "tak" || xString == "TAK")
    {
        cout << "K: To do zobaczenia.";
    }
    else
    {
        cout << "K: To cze��.";
    }


    return 0;

}

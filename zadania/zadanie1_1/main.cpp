#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_CTYPE, "Polish");

    // PYTANIA
    /*
    - Jak sie nazywasz?
    - Co tam u ciebie?
    - Ile masz lat?
    - Ile masz chromosomow?
    - Jaki jest twoj ulubiony kolor?
    - Jaka jest twoja ulubiona liczba calkowita?
    - Jakie jest imie twojej matki?
    - Jakie jest nazwisko rodowe twojej matki?
    - Jaka jest twoja ulubiona marka samochodowa?
    - Spotkamy sie jeszcze kiedys?
    */

    string xString;
    int xInt;


    cout << "K: Czesc." << endl;
    cin >> xString;

    cout << "K: Jak sie nazywasz?" << endl;
    cin >> xString;
    cout << "K: Milo cie poznac " << xString << ". Ja mam na imie AMD Ryzen 5 2400G." << endl;

    cout << "K: Co tam u ciebie?" << endl;
    cin >> xString;
    cout << "K: U mnie tez " << xString << "." << endl;

    cout << "K: Ile masz lat?" << endl;
    cin >> xInt;
    cout << "K: Ja tez mam " << xInt << " lat." << endl;

    cout << "K: Ile masz chromosomow?" << endl;
    cin >> xInt;
    cout << "K: A ja mam " << xInt + 1 << " chromosomow." << endl;

    cout << "K: Jaki jest twoj ulubiony kolor?" << endl;
    cin >> xString;
    cout << "K: Moim tez ulubionym kolorem jest " << xString << "." << endl;

    cout << "K: Jaka jest twoja ulubiona liczba calkowita?" << endl;
    cin >> xInt;
    cout << "K: Twoja ulubiona liczba calkowita to " << xInt << ", a moja to kwadrat twojej liczby " << xInt*xInt << "." << endl;

    cout << "K: Jakie jest imie twojej matki?" << endl;
    cin >> xString;
    cout << "K: Hmm... Serio ma na imie " << xString << "?" << endl;
    cin >> xString;
    cout << "K: Okej." << endl;

    cout << "K: Jakie jest nazwisko rodowe twojej matki?" << endl;
    cin >> xString;
    cout << "K: Niewiedzialem ze miala na nazwisko " << xString << "." << endl;

    cout << "K: Jaka jest twoja ulubiona marka samochodowa?" << endl;
    cin >> xString;
    cout << "K: Moja to Pontiac, ale " << xString << " tez jest ok." << endl;

    cout << "K: Spotkamy sie jeszcze kiedys?" << endl;
    cin >> xString;
    if(xString == "Tak" || xString == "tak" || xString == "TAK")
    {
        cout << "K: To do zobaczenia.";
    }
    else
    {
        cout << "K: To czesc.";
    }


    return 0;

}

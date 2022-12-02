#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_CTYPE, "Polish");

    // PYTANIA
    /*
    - Jak siê nazywasz?
    - Co tam u ciebie?
    - Ile masz lat?
    - Ile masz chromosomów?
    - Jaki jest twój ulubiony kolor?
    - Jaka jest twoja ulubiona liczba ca³kowita?
    - Jakie jest imiê twojej matki?
    - Jakie jest nazwisko rodowe twojej matki?
    - Jaka jest twoja ulubiona marka samochodowa?
    - Spotkamy siê jeszcze kiedyœ?
    */

    string xString;
    int xInt;


    cout << "K: Czeœæ." << endl;
    cin >> xString;

    cout << "K: Jak siê nazywasz?" << endl;
    cin >> xString;
    cout << "K: Mi³o ciê poznaæ " << xString << ". Ja mam na imiê AMD Ryzen 5 2400G." << endl;

    cout << "K: Co tam u ciebie?" << endl;
    cin >> xString;
    cout << "K: U mnie te¿ " << xString << "." << endl;

    cout << "K: Ile masz lat?" << endl;
    cin >> xInt;
    cout << "K: Ja te¿ mam " << xInt << " lat." << endl;

    cout << "K: Ile masz chromosomów?" << endl;
    cin >> xInt;
    cout << "K: A ja mam " << xInt + 1 << " chromosomów." << endl;

    cout << "K: Jaki jest twój ulubiony kolor?" << endl;
    cin >> xString;
    cout << "K: Moim te¿ ulubionym kolorem jest " << xString << "." << endl;

    cout << "K: Jaka jest twoja ulubiona liczba ca³kowita?" << endl;
    cin >> xInt;
    cout << "K: Twoja ulubiona liczba ca³kowita to " << xInt << ", a moja to kwadrat twojej liczby " << xInt*xInt << "." << endl;

    cout << "K: Jakie jest imiê twojej matki?" << endl;
    cin >> xString;
    cout << "K: Hmm... Serio ma na imiê " << xString << "?" << endl;
    cin >> xString;
    cout << "K: Okej." << endl;

    cout << "K: Jakie jest nazwisko rodowe twojej matki?" << endl;
    cin >> xString;
    cout << "K: Niewiedzia³em ¿e mia³a na nazwisko " << xString << "." << endl;

    cout << "K: Jaka jest twoja ulubiona marka samochodowa?" << endl;
    cin >> xString;
    cout << "K: Moja to Pontiac, ale " << xString << " te¿ jest ok." << endl;

    cout << "K: Spotkamy siê jeszcze kiedyœ?" << endl;
    cin >> xString;
    if(xString == "Tak" || xString == "tak" || xString == "TAK")
    {
        cout << "K: To do zobaczenia.";
    }
    else
    {
        cout << "K: To czeœæ.";
    }


    return 0;

}

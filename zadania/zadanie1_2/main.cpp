#include <iostream>

using namespace std;

int main()
{
    char mathOperator;
    float number1, number2;

    cout << "PROSTY KALKULATOR" << endl;

    cout << "Jakie dzialanie chcesz wykonac:" << endl;
    cout << "\t dodawanie wybierz:    +" << endl;
    cout << "\t odejmowanie wybierz:  -" << endl;
    cout << "\t mnozenie wybierz:     *" << endl;
    cout << "\t dzielenie wybierz:    /" << endl;

    mathOperator = getchar();

    cout << "Podaj 2 dowolne liczby (zeby uzyc liczby przecinkowej nalezy zamiast ',' uzyc '.'):" << endl;

    cin >> number1 >> number2;

    if (mathOperator == '+')
    {
        cout << "Wybrales dodawanie" << endl;
        cout << "Wynik dodawania: " << number1 + number2 << endl;
    }
    else if (mathOperator == '-')
    {
        cout << "Wybrales odejmowanie" << endl;
        cout << "Wynik odejmowanie: " << number1 - number2 << endl;
    }
    else if (mathOperator == '*')
    {
        cout << "Wybrales mnozenie" << endl;
        cout << "Wynik mnozenie: " << number1 * number2 << endl;
    }
    else if (mathOperator == '/')
    {
        if (number1 == 0 || number2 == 0)
        {
            cout << "BLAD" << endl;
            cout << "Nie mozna dzielic przez 0" << endl;
            return 0;
        }
        cout << "Wybrales dzielenie" << endl;
        cout << "Wynik dzielenie: " << number1 / number2 << endl;
    }
    else
    {
        cout << "BLAD" << endl;
        cout << "Sprawdz czy napewno podales odpowiedni operator matematyczny (+, -, *, /)" << endl;
        cout << "Podany operator matematyczny: " << mathOperator << endl;
    }

    return 0;
}

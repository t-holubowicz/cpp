# PODSTAWY C++

## SPIS TREŚCI

<!-- TODO: Dodać spis treści -->

---

## ENCODING

### POLSKIE ZNAKI

```cpp
setlocale(LC_CTYPE, "Polish");  // napewno Windows i Linux
system("chcp 1250>null");       // tylko Windows
```

---

## ZMIENNE

### RODZAJ ZMIENNEJ
- `const` - stala [const int PI = 3.14;]

### TYPY ZMIENNEJ
- `int` - calkowita
- `float` - zmiennoprzecinkowa od 6 do 9 znakow
- `double` - zmiennoprzecinkowa od 15 do 18 znakow
- `char` - znak ASCII
- `string` - tekst
- `bool` - logiczmy (true, false)

---

## TABLICE

**Jednowymiarowe**

```cpp
int oceny[6] = {1, 3, 5, 2, 6, 4};
cout << "ocena w indeksie na pozycji 2: " << oceny[2] << endl;
```

**Wielowymiarowe**

```cpp
int tablica[3][4] = {
    14, 13, 12, 11,
    26, 27, 28, 29,
    32, 34, 37, 39
};
cout << "pozycja w indeksie [0] i [3] to: " << tablica[0][3] << endl;
```

```cpp
float cukierki[2][2] = {
    1, 2,
    3, 4
};
cukierki[0][0] = 11;
cukierki[0][1] = 12;
```

---

## WEKTORY

**WEKTORY** - są jak tablice, ale pamięć automatycznie się dostosowuje do ilości elementów w wektorze

```cpp
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
```

---

## CIĄGI ZNAKÓW

Ciagi znakow mozemy przechowywac rowniez w formie tablicy np. `char imie[9] = "Adam";` wowczas program ciag przechowa w sposob nastepujacy `[A, d, a, m, \0, \0, \0, \0, \0]` brakujace miejsca uzupelni znak null

```cpp
// przyklad 1
char imie[5] = "Adam";
cout << imie << endl;

// przyklad 2
char imie_1[] = "Adam";
cout << imie_1 << endl;

// przyklad 3
char imie_2[] = {'A', 'd', 'a', 'm', '\0'};
cout << imie_2 << endl;

// przyklad 4
char ciag[20] = "Programowanie";
cout << ciag << endl;
cout << ciag[4] << endl;
```

---

## ZNAKI SPECJALNE

- `\n` - koniec wiersza
- `\a` - alert
- `\t` - tabulator
- `\"` - cudzysłów
- `\'` - apostrof
- `\?` - pytajnik
- `\\` - backslash

---

## FUNKCJE MATEMATYCZNE

```cpp
#include <cmath>

sqrt(x);    // pierwiastek
round(x);   // zaokraglanie
ceil(x);    // zaokraglanie w gore
floor(x);   // zaokraglenie w dol
```

---

## PRZYTRZYMANIE KONSOLI

```cpp
system("pause");
getchar();
```

---

## POBIERANIE DANYCH OD UŻYTKOWNIKA

```cpp
string dane;
cin >> dane;
```

```cpp
float koszulki[4];
cin >> koszulki[0] >> koszulki[1] >> koszulki[2] >> koszulki[3];
```

```cpp
string dane;
getline(cin, dane, '\n');
```

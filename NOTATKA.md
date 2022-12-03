# Podstawy C++

## SPIS TREŚCI

- [PODSTAWY C++](#podstawy-c)
  - [SPIS TREŚCI](#spis-treści)
  - [ENCODING](#encoding)
    - [POLSKIE ZNAKI](#polskie-znaki)
  - [ZMIENNE](#zmienne)
    - [RODZAJ ZMIENNEJ](#rodzaj-zmiennej)
    - [TYPY ZMIENNEJ](#typy-zmiennej)
  - [CIĄGI ZNAKÓW](#ciągi-znaków)
  - [TABLICE](#tablice)
  - [WEKTORY](#wektory)
  - [ZNAKI SPECJALNE](#znaki-specjalne)
  - [FUNKCJE MATEMATYCZNE](#funkcje-matematyczne)
  - [PRZYTRZYMANIE KONSOLI](#przytrzymanie-konsoli)
  - [POBIERANIE DANYCH OD UŻYTKOWNIKA](#pobieranie-danych-od-użytkownika)

---

## ENCODING

### POLSKIE ZNAKI

```cpp
setlocale(LC_CTYPE, "Polish");  // na pewno Windows i Linux
system("chcp 1250>null");       // tylko Windows
```

---

## ZMIENNE

### RODZAJ ZMIENNEJ

- `const` - stala [const int PI = 3.14;]

### TYPY ZMIENNEJ

- `int` - całkowita
- `float` - zmiennoprzecinkowa od 6 do 9 znaków
- `double` - zmiennoprzecinkowa od 15 do 18 znaków
- `char` - znak ASCII
- `string` - tekst
- `bool` - logiczny (true, false)

---

## CIĄGI ZNAKÓW

Ciągi znaków możemy przechowywać również w formie tablicy np. `char imie[9] = "Adam";` wówczas program ciąg przechowa w sposób następujący `[A, d, a, m, \0, \0, \0, \0, \0]` brakujące miejsca uzupełni znak null

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

// przyklad 6 wymaga biblioteke <cstring>
char auto_1[20], auto_2[20];
cout << "Podaj nazwe auta 1: " << endl;
cin >> auto_1;
cout << "Podaj nazwe auta 2: " << endl;
cin >> auto_2;
cout << "Twoje auto to: " << auto_1 << endl << auto_2 << endl;
strcpy(auto_2, auto_1);
cout << "A teraz twoje auta to: " << auto_1 << endl << auto_2 << endl;

// przyklad 7 (wymaga biblioteke <cstring>)
char imie[20], nazwisko[20];
cout << "Podaj swoje imie: ";
cin >> imie;
cout << "Podaj swoje nazwisko: ";
cin >> nazwisko;
strcat(imie, " ");
strcat(imie, nazwisko);
cout << "Twoje dane to: " << imie << endl;
```

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

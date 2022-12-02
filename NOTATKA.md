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

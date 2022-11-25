# PODSTAWA C++

## ZMIENNE

### RODZAJ ZMIENNEJ
- `const` - stala [const int PI = 3.14;]

### TYP ZMIENNEJ
- `int` - calkowita
- `float` - zmiennoprzecinkowa od 6 do 9 znakow
- `double` - zmiennoprzecinkowa od 15 do 18 znakow
- `char` - znak ASCII
- `string` - tekst
- `bool` - logiczmy (true, false)

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

## ENCODING

### POLSKIE ZNAKI

```cpp
setlocale(LC_CTYPE, "Polish");  // napewno Windows i Linux
system("chcp 1250>null");       // tylko Windows
```

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

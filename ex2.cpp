#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

//przed wykorzystaniem funkcji deszyfrowania nalezy wprowadzic niezbêdne dane do pliku odczyt.txt!
// 1 linia - tekst ktory program musi deszyfrowac,
// 2 linia - klucz do deszyfrowania (w przypadku deszyfrowania Vinegere'a. jezeli nie - zostawiamy puste miejsce)




string abc = "abcdefghijklmnopqrstuvwxyz";

int keycode(char s) {
    for (int i = 0; i < abc.length(); i++) {
        if (s == abc[i]) return i;
    }
    return 0;
}

string szyfr(string tekst, string klucz) {

    string code;

    for (int i = 0; i < tekst.length(); i++) {

        code += abc[(keycode(tekst[i]) + keycode(klucz[i % klucz.length()])) % abc.length()];

    }
    return code;
}

string deszyfrowanie(string tekst, string klucz) {
    string code;
    for (int i = 0; i < tekst.length(); i++) {
        code += abc[(keycode(tekst[i]) - keycode(klucz[i % klucz.length()]) + abc.length()) % abc.length()];
    }

    return code;
}

int main()
{
    int n;

    cout << "Menu Vigenerea:\n" << endl;
    cout << "1. Szyfrowanie" << endl;
    cout << "2. Deszyfrowanie" << endl;

    cout << "wybierz numer" << endl;
    cin >> n;

    switch (n) {
    case 1: {
        string txt;
        string klucz;

        cout << "Wprowadz tekst: " << endl;
        cin >> txt;
        cout << "Wprowadz klucz: " << endl;
        cin >> klucz;

        for (auto& c : txt) c = tolower(c);
        for (auto& c : klucz) c = tolower(c);

        string rezultat = szyfr(txt, klucz);

        fstream zapis;
        zapis.open("zapis.txt", ios::out);

        if (zapis.good() == false) {
            cout << "error" << endl;
            exit(0);
        }
        zapis << rezultat;
        zapis.close();

        cout << "Wiadomosc zostala zapisana do pliku zapis.txt" << endl;

        break;

    }
    case 2: {
        string txt;
        string klucz;

        fstream odczyt;

        odczyt.open("odczyt.txt", ios::in);

        if (odczyt.good() == false) {
            cout << "error" << endl;
            exit(0);
        }
        getline(odczyt, txt);
        getline(odczyt, klucz);


        for (auto& c : txt) c = tolower(c);
        for (auto& c : klucz) c = tolower(c);

        odczyt.close();

        string rezultat = deszyfrowanie(txt, klucz);
        cout << rezultat << endl;

        break;
    }
          return 0;
    }
}


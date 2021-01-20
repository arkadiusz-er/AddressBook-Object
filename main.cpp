#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    char wybor;
    while (true) {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}
/*
#testy klasy AdresatMenedzer
#include "AdresatMenedzer.h"

int testyAdresata_main() {
    AdresatMenedzer adresatMenedzer ("Adresaci.txt", 2);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

#testy klasy PlikZAdresatami
#include "Adresat.h"
#include "PlikZAdresatami.h"

int testyPlikZAdresatami_main() {
    PlikZAdresatami plikZAdresatami("Adresaci-test.txt");
    Adresat adresat(1, 9, "Jan", "Zagloba", "123 123 321", "janko@janko.pl", "ul. Juranda 2, 99-123 Warszawa");
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    cout << plikZAdresatami.pobierzIdOstatniegoAdresata();
}
*/

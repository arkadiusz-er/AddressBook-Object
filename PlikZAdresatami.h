#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy {
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    bool usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void edytujAdresataWPliku(Adresat adresat, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);
    void pobierzZPlikuIdOstatniegoAdresata();
};

#endif

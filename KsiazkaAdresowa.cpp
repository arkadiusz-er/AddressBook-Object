#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
/*
void KsiazkaAdresowa::pobierzId() {
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
*/
void KsiazkaAdresowa::zmienHaslo() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}






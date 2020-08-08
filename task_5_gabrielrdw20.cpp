#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

class Osoba {
public:
	Osoba(int identyfikator = 0, int wiek = 0, string nazwisko = "brak") { this->identyfikator = identyfikator, this->wiek = wiek, this->nazwisko = nazwisko; }
	int get_id() { return this->identyfikator; }
	int get_wiek() { return this->wiek; }
	string get_nazwisko() { return this->nazwisko; }
	void zapisz_dane_osoba() {
		fstream dane_osoba("dane_osoba.txt", ios_base::app | ios_base::in);
		dane_osoba << get_id() << endl;
		dane_osoba << get_wiek() << endl;
		dane_osoba << get_nazwisko() << endl;
		dane_osoba.close();
	}
private:
	int identyfikator;
	int wiek;
	string nazwisko;
};

class Sprzet {
public:
	Sprzet(int identyfikator = 0, string typ = "brak") { this->identyfikator = identyfikator, this->typ = typ; }
	int get_id_s() { return this->identyfikator; }
	string get_typ() { return this->typ; }
	void zapisz_dane_sprzet() {
		fstream dane_sprzet("dane_sprzet.txt", ios_base::app | ios_base::in);
		dane_sprzet << get_id_s() << endl;
		dane_sprzet << get_typ() << endl;
		dane_sprzet.close();
	}
private:
	int identyfikator;
	string typ;
};

class Wypozyczanie {
public:
	Wypozyczanie(int identyfikator_osoby = 0, int identyfikator_sprzetu = 0) { this->identyfikator_osoby = identyfikator_osoby; this->identyfikator_sprzetu = identyfikator_sprzetu; }
	int get_id_osoby() {return this->identyfikator_osoby; }
	int get_id_sprzetu() {return this->identyfikator_sprzetu; }
	void zapisz_dane_wypozyczanie() {
		fstream dane_wypozyczanie("dane_wypozyczanie.txt", ios_base::app | ios_base::in);
		dane_wypozyczanie << get_id_osoby() << endl;
		dane_wypozyczanie << get_id_sprzetu() << endl;
		dane_wypozyczanie.close();
	}
private:
	int identyfikator_osoby;
	int identyfikator_sprzetu;
};

void zwroc_nazwisko(int i, string a, Osoba katalog[], Sprzet katalog1[]) {
    cout << "Osoby powyzej 25 roku zycia, ktore wypozyczyly hulajnoge: " << endl;
    for (i=0; i<10; i++){
        if ((katalog1[i].get_typ() == a) && ( katalog[i].get_wiek()>25 ) )
            {cout << katalog[i].get_nazwisko();}}
}

void zwroc_liczbe_rowerow(int i, string b, int k, Sprzet katalog1[], Wypozyczanie katalog2[] ){
    for (i=0; i<10; i++) {
        if ((katalog1[i].get_typ() == b) && (katalog1[i].get_id_s() == katalog2[i].get_id_sprzetu())){k++;}}
        cout << "\nLiczba aktualnie wypozyczonych rowerow: " << k << endl;
}

int main() {

	int i, j, k=0;
	string a="hulajnoga";
	string b="rower";

	Osoba *Osoba_1 = new Osoba(1, 19, "Nowak");
	Osoba *Osoba_2 = new Osoba(2, 26, "Wawrzyniak\n");
	Osoba *Osoba_3 = new Osoba(3, 45, "Tort\n");
	Osoba *Osoba_4 = new Osoba(4, 34, "Zajac\n");
	Osoba *Osoba_5 = new Osoba(5, 18, "Pawliczak\n");
	Osoba *Osoba_6 = new Osoba(6, 25, "Edynburg\n");
	Osoba *Osoba_7 = new Osoba(7, 41, "Winogrona\n");
	Osoba *Osoba_8 = new Osoba(8, 25, "Gruszka\n");
	Osoba *Osoba_9 = new Osoba(9, 29, "Kapusta\n");
	Osoba *Osoba_10 = new Osoba(10, 20, "Sukiennik\n");

	Osoba katalog[10]{ *Osoba_1, *Osoba_2, *Osoba_3, *Osoba_4, *Osoba_5, *Osoba_6, *Osoba_7, *Osoba_8, *Osoba_9, *Osoba_10 };
	for (i = 0; i < 10; i++) {
		katalog[i].zapisz_dane_osoba();
	}
	Sprzet *Sprzet1 = new Sprzet(1, "rower");
	Sprzet *Sprzet2 = new Sprzet(2, "hulajnoga");
	Sprzet *Sprzet3 = new Sprzet(3, "rower");
	Sprzet *Sprzet4 = new Sprzet(4, "rolki");
	Sprzet *Sprzet5 = new Sprzet(5, "rower");
	Sprzet *Sprzet6 = new Sprzet(6, "hulajnoga");
	Sprzet *Sprzet7 = new Sprzet(7, "rower");
	Sprzet *Sprzet8 = new Sprzet(8, "hulajnoga");
	Sprzet *Sprzet9 = new Sprzet(9, "hulajnoga");
	Sprzet *Sprzet10 = new Sprzet(10, "rower");

	Sprzet katalog1[10]{ *Sprzet1, *Sprzet2, *Sprzet3, *Sprzet4, *Sprzet5, *Sprzet6, *Sprzet7, *Sprzet8, *Sprzet9, *Sprzet10 };
	for (i = 0; i < 10; i++) {
		katalog1[i].zapisz_dane_sprzet();
	}
	Wypozyczanie *Wypoz1 = new Wypozyczanie(1, 1);
	Wypozyczanie *Wypoz2 = new Wypozyczanie(2, 2);
	Wypozyczanie *Wypoz3 = new Wypozyczanie(3, 3);
	Wypozyczanie *Wypoz4 = new Wypozyczanie(4, 4);
	Wypozyczanie *Wypoz5 = new Wypozyczanie(5, 5);
	Wypozyczanie *Wypoz6 = new Wypozyczanie(6, 6);
	Wypozyczanie *Wypoz7 = new Wypozyczanie(7, 7);
	Wypozyczanie *Wypoz8 = new Wypozyczanie(8, 8);
	Wypozyczanie *Wypoz9 = new Wypozyczanie(9, 9);
	Wypozyczanie *Wypoz10 = new Wypozyczanie(10, 10);

	Wypozyczanie katalog2[10]{ *Wypoz1, *Wypoz2, *Wypoz3, *Wypoz4, *Wypoz5, *Wypoz6, *Wypoz7, *Wypoz8, *Wypoz9, *Wypoz10 };
    for (i = 0; i < 10; i++) {katalog2[i].zapisz_dane_wypozyczanie();}

    zwroc_nazwisko(i, a, katalog, katalog1);
    zwroc_liczbe_rowerow(i,b, k, katalog1, katalog2);


system("pause");

}

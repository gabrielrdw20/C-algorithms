#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Zamowienie
	{
	private:
		string nazwa_produktu;
		float cena_produktu;
		string data_zakupu;
		int liczba_sztuk;
	public:
		void zapisz_dane(string,float,string,int); //
		void wyswietl_dane();//
		string podaj_nazwe_produktu(){return this->nazwa_produktu;}; //
		float podaj_cene(){return this->cena_produktu;}; //
		string podaj_date_zakupu(){return this->data_zakupu;}; //
		int podaj_liczbe_sztuk(){return this->liczba_sztuk;}; //
		float podaj_koszt(){return (this->cena_produktu)*(this->liczba_sztuk);};
	}; //

void Zamowienie::zapisz_dane(string nazwa_produktu,float cena_produktu,string data_zakupu,int liczba_sztuk)
	{
	this->nazwa_produktu=nazwa_produktu;
	this->cena_produktu=cena_produktu;
	this->data_zakupu=data_zakupu;
	this->liczba_sztuk=liczba_sztuk;
	}

void Zamowienie::wyswietl_dane()
	{
	cout << "\nNazwa produktu:\t\t" << this->nazwa_produktu << endl;
	cout << "Cena:\t\t\t" << this->cena_produktu << endl;
	cout << "Data zakupu:\t\t" << this->data_zakupu << endl;
	cout << "Liczba sztuk:\t\t" << this->liczba_sztuk << "\n" << endl;
	}

int main(){

	string nazwa_produktu;
	float cena_produktu;
	string data_zakupu;
	int liczba_sztuk;

	Zamowienie *produkt1=new Zamowienie;

	cout << "Podaj nazwe produktu nr 1: " << endl;
	cin >> nazwa_produktu;
	cout << "Podaj cene produktu nr 1: " << endl;
	cin >> cena_produktu;
	cout << "Podaj date zakupu produktu nr 1: " << endl;
	cin >> data_zakupu;
	cout << "Podaj liczbe sztuk produktu nr 1: " << endl;
	cin >> liczba_sztuk;

	produkt1->zapisz_dane(nazwa_produktu,cena_produktu,data_zakupu,liczba_sztuk);
	produkt1->wyswietl_dane();

	Zamowienie *produkt2=new Zamowienie;

	cout << "Podaj nazwe produktu nr 2: " << endl;
	cin >> nazwa_produktu;
	cout << "Podaj cene produktu nr 2: " << endl;
	cin >> cena_produktu;
	cout << "Podaj date zakupu produktu nr 2: " << endl;
	cin >> data_zakupu;
	cout << "Podaj liczbe sztuk produktu nr 2: " << endl;
	cin >> liczba_sztuk;

	produkt2->zapisz_dane(nazwa_produktu,cena_produktu,data_zakupu,liczba_sztuk);
	produkt2->wyswietl_dane();

	cout << " " << endl;

	cout << "Nazwa produktu:\t\t" << produkt1->podaj_nazwe_produktu() << endl;
	cout << "Cena:\t\t\t" << produkt1->podaj_cene() << endl;
	cout << "Data zakupu:\t\t" << produkt1->podaj_date_zakupu() << endl;
	cout << "Liczba sztuk:\t\t" << produkt1->podaj_liczbe_sztuk() << endl;
	cout << "Koszt calkowity:\t" << produkt1->podaj_koszt() << endl;

	cout << " " << endl;

	cout << "Nazwa produktu:\t\t" << produkt2->podaj_nazwe_produktu() << endl;
	cout << "Cena:\t\t\t" << produkt2->podaj_cene() << endl;
	cout << "Data zakupu:\t\t" << produkt2->podaj_date_zakupu() << endl;
	cout << "Liczba sztuk:\t\t" << produkt2->podaj_liczbe_sztuk() << endl;
	cout << "Koszt calkowity:\t" << produkt2->podaj_koszt() << endl;

	delete produkt1;
	delete produkt2;

	system("pause");
	}


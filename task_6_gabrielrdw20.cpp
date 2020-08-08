#include <iostream>
#include <string>
using namespace std;

class Urzadzenie
{
	public:
		Urzadzenie(int obroty = 0, string firma = "brak")
		{
			this->obroty = obroty;
			this->firma = firma;
		};
	string daj_firme()
	{
		return this->firma;
	}
	int daj_obroty()
	{
		return this->obroty;
	}
	void pokaz_opis()
	{
		cout << "Producent urzadzenia: " << firma << endl;
		cout << "Obroty/min: " << obroty << endl;
	};
	protected:
		int obroty;
	    string firma;
};

class SzlifierkaKatowa: public Urzadzenie
{
	public: SzlifierkaKatowa(int moc = 0, int tarcza = 0, int obroty = 0, string firma = "brak"): Urzadzenie(obroty, firma)
	{
		this->moc = moc;
		this->tarcza = tarcza;
	};
	int daj_moc()
	{
		return this->moc;
	}
	int daj_tarcze()
	{
		return this->tarcza;
	}
	void pokaz_opis()
	{
		cout << "\nProducent: " << firma << endl;
		cout << "Obroty/min: " << obroty << endl;
		cout << "Moc szlifierki: " << moc << " W" << endl;
		cout << "Srednica tarczy szlifierki: " << tarcza << " mm" << endl;
	};
	private:
	    int moc;
	    int tarcza;
};

class WiertarkoWkretarka: public Urzadzenie
{
	public: WiertarkoWkretarka(double napiecie = 0, string bateria = "brak", int czas_ladow = 0, int obroty = 0, string firma = "brak"): Urzadzenie(obroty, firma)
	{
		this->napiecie = napiecie;
		this->bateria = bateria;
		this->czas_ladow = czas_ladow;
	};
	double daj_napiecie()
	{
		return this->napiecie;
	}
	string daj_baterie()
	{
		return this->bateria;
	}
	int daj_czas_ladow()
	{
		return this->czas_ladow;
	}
	void pokaz_opis()
	{
		cout << "\nProducent: " << firma << endl;
		cout << "Obroty/min: " << obroty << endl;
		cout << "Bateria: " << bateria << endl;
		cout << "Czas ladowania: " << czas_ladow << " minut" << endl;
		cout << "Napiecie wkretarko-wiertarki: " << napiecie << " V" << endl;
	};
	private:
	    double napiecie;
    	string bateria;
    	int czas_ladow;
};

void wypisz_dane(SzlifierkaKatowa szlifierka[])
{
    int i=0;
    int temp=szlifierka[0].Urzadzenie::daj_obroty();
    
    for(i=0;i<=2;i++) if(temp<szlifierka[i].Urzadzenie::daj_obroty()) temp=szlifierka[i].Urzadzenie::daj_obroty();
    for(i=0;i<=2;i++) if(szlifierka[i].Urzadzenie::daj_obroty()==temp) szlifierka[i].SzlifierkaKatowa::pokaz_opis();
}

void wypisz_dane_bateria(WiertarkoWkretarka wiertarka[])
{
    int i=0;
    int temp=wiertarka[0].WiertarkoWkretarka::daj_czas_ladow();
    
    for(i=0;i<=2;i++) if(temp>wiertarka[i].WiertarkoWkretarka::daj_czas_ladow()) temp=wiertarka[i].WiertarkoWkretarka::daj_czas_ladow();
    for(i=0;i<=2;i++) if(wiertarka[i].WiertarkoWkretarka::daj_czas_ladow()==temp) wiertarka[i].WiertarkoWkretarka::pokaz_opis();
}


int main()
{
	int i;

	Urzadzenie *Urzadzenie_1 = new Urzadzenie(0, "brak");
	Urzadzenie *Urzadzenie_2 = new Urzadzenie(0, "brak");
	Urzadzenie *Urzadzenie_3 = new Urzadzenie(0, "brak");

// wyszukiwanie urzadzen po parametrach dziala dla >, < oraz ==, prosze wpisac rozne parametry w roznych konfiguracjach (np. A=B=C, A>B i B<C, etc.)

	SzlifierkaKatowa *SzlifierkaKatowa_1 = new SzlifierkaKatowa(500, 400, 700, "Graphite");
	SzlifierkaKatowa *SzlifierkaKatowa_2 = new SzlifierkaKatowa(700, 600, 700, "Makita");
	SzlifierkaKatowa *SzlifierkaKatowa_3 = new SzlifierkaKatowa(800, 500, 200, "Bosch GWS");

	WiertarkoWkretarka *WiertarkoWkretarka_1 = new WiertarkoWkretarka(300, "alkaliczna", 10, 100, "Bosch");
	WiertarkoWkretarka *WiertarkoWkretarka_2 = new WiertarkoWkretarka(200, "litowo-manganowa", 30, 500, "McAllister");
	WiertarkoWkretarka *WiertarkoWkretarka_3 = new WiertarkoWkretarka(500, "cynkowo-weglowa", 30, 100, "Black&Decker");

	SzlifierkaKatowa szlifierka[3]
	{* SzlifierkaKatowa_1, *SzlifierkaKatowa_2, *SzlifierkaKatowa_3
	};
	WiertarkoWkretarka wiertarka[3]
	{* WiertarkoWkretarka_1, *WiertarkoWkretarka_2, *WiertarkoWkretarka_3
	};

	cout << "1. Szlifierka o najwiekszych obrotach:" << endl;
	wypisz_dane(szlifierka);

	cout << "\n\n2. Wiertarka o najkrotszym czasie ladowania: " << endl;
	wypisz_dane_bateria(wiertarka);

	return 0;
}

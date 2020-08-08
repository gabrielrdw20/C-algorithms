#include <iostream>
#include<string>
#include <cstdlib>
using namespace std;

class Silnik
{
    public:
        Silnik(int pojemnosc, string producent) : pojemnosc(pojemnosc), producent(producent){};
        int getPojemnosc(){return this->pojemnosc;}
        string producent_silnik(){return this->producent;}
    private:
        int pojemnosc;
        string producent;
};

class Urzadzenie
{
   public:
		Silnik silnik;
        Urzadzenie(int obroty, int pojemnosc, string producent, string producent_1) : obroty(obroty), producent_1(producent_1), silnik(pojemnosc,producent){};
        int getObroty(){return this->obroty;}
        Silnik getSilnik(){return this->silnik;}
		const string podaj_producent(){return this->producent_1;};
    private:
        const string producent_1;
        int obroty;
};

void wyszukaj(int i, string szukaj, bool sukces, Urzadzenie katalog[]) {
  for (i = 0; i < 6; i++) {
    if (katalog[i].podaj_producent() == szukaj) {
       if (katalog[i].silnik.producent_silnik()==szukaj){
    cout << "\nPojemnosc: " << katalog[i].silnik.getPojemnosc() << endl;
    cout << "Obroty: " << katalog[i].getObroty() << endl;
    cout << "Producent (silnika): " << katalog[i].silnik.producent_silnik() << endl;
    cout << "Producent (urzadzenia): " << katalog[i].podaj_producent() << endl;
          sukces=true;
       }
    }
  }
  if (!sukces) cout << "\nW katalogu nie odnaleziono urzadzenia takiego producenta." << endl;
}

int main()
{
    string szukaj;
    bool sukces=false;
    int i=0;

    Urzadzenie *Pralka_1 = new Urzadzenie(2000,30,"Bosch","Samsung");
    Urzadzenie *Pralka_2 = new Urzadzenie(3000,60,"Samsung","Bosch");
    Urzadzenie *Pralka_3 = new Urzadzenie(2500,50,"Bosch","Bosch");
    Urzadzenie *Pralka_4 = new Urzadzenie(1500,25,"Samsung","Samsung");
    Urzadzenie *Pralka_5 = new Urzadzenie(1800,30,"Bosch","Bosch");
    Urzadzenie *Pralka_6 = new Urzadzenie(2800,45,"Samsung","Samsung");

    Urzadzenie katalog[6]{*Pralka_1,*Pralka_2,*Pralka_3,*Pralka_4,*Pralka_5,*Pralka_6};

    cout << "\nWpisz poszukiwanego producenta urzadzenia: " << endl;
    cin >> szukaj;

    wyszukaj(i,szukaj,sukces,katalog);
    
return 0;
}


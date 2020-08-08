#include < iostream > #include < string >

using namespace std;

class Auto {

  public:
    Auto(string producent, string kolor, int pojemnosc) {
      this - > producent = producent;
      this - > kolor = kolor;
      this - > pojemnosc = pojemnosc;
    };
  void wypisz_dane() {
    cout << "\nProducent: " << this - > producent << endl;
    cout << "Kolor:  " << this - > kolor << endl;
    cout << "Pojemnosc silnika: " << this - > pojemnosc << endl;
  }

  string wypisz_producent() {
    return this - > producent;
  }
  string wypisz_kolor() {
    return this - > kolor;
  }
  int wypisz_pojemnosc() {
    return this - > pojemnosc;
  }
  private:
    string producent, kolor;
  int pojemnosc;
};

void wypisz_tablice(Auto tablica[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << "\nAuto nr " << i << ":";
    tablica[i].wypisz_dane();
  }
}

void wyszukaj(int n, int i, int szukaj, bool sukces, Auto katalog1[]) {
  for (i = 0; i < n; i++) {
    if (katalog1[i].wypisz_pojemnosc() == szukaj) {
      return katalog1[i].wypisz_dane();
      sukces = true;
    }
  }

  if (!sukces) cout << "\nW katalogu nie odnaleziono auta o takiej pojemnosci silnika." << endl;

}

int main(void) {
  int i, j, n = 5;
  bool sukces = false;
  int szukaj;
  int wiersze = 2, kolumny = 5;

  Auto * Ford = new Auto("Ford", "czerwony", 5634);
  Auto * Fiat = new Auto("Fiat", "czarny", 2458);
  Auto * Skoda = new Auto("Skoda", "zielony", 5489);
  Auto * Ferrari = new Auto("Ferrari", "srebrny", 8749);
  Auto * Citroen = new Auto("Citroen", "niebieski", 2458);

  Auto katalog1[5] {
    * Ford, * Fiat, * Skoda, * Ferrari, * Citroen
  };

  int tab[5] = {
    5634,
    2458,
    5489,
    8749,
    4687
  };

  string ** tablica = new string * [wiersze];
  for (i = 0; i < wiersze; ++i) tablica[i] = new string[kolumny];

  for (i = 0; i < wiersze; ++i) {
    for (j = 0; j < kolumny; ++j) tablica[i][j] = "  ";

    tablica[0][0] = "czarny";
    tablica[0][1] = "bialy";
    tablica[0][2] = "czerwony";
    tablica[0][3] = "zielony";
    tablica[0][4] = "srebrny";
    tablica[1][0] = "Ford";
    tablica[1][1] = "Fiat";
    tablica[1][2] = "Skoda";
    tablica[1][3] = "Ferrari";
    tablica[1][4] = "Citroen";
  }

  for (i = 0; i < wiersze; ++i) delete[] tablica[i];
  delete[] tablica;

  cout << "Wprowadz szukana pojemnosc silnika: " << endl;
  cin >> szukaj;

  wyszukaj(n, i, szukaj, sukces, katalog1);

  return 0;
}
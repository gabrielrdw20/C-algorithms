#include<iostream>
using namespace std;

class Nazwisko {
char surname, *nazwisko = &surname;
public:
   Nazwisko(char surname='a'){this-> surname=surname;};
  ~Nazwisko(){cout << "Nazwisko: " <<  *nazwisko; delete nazwisko;};  
};

class Pelne : public Nazwisko {
char name, *imie = &name;
public:
    Pelne(char name='b', char surname ='a'): Nazwisko(surname){this->name=name; cout << "Imie: " << *imie << endl;};
    ~Pelne(){cout << "Imie: " << *imie; delete imie;};
};

int main(){
    
   Nazwisko *obiekt = new Pelne;
   delete obiekt;
   return 0;
}
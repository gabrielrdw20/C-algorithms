#include<iostream>
#include<string>
#include <iomanip>   

using namespace std;

class Bryla {
public:
virtual float objetosc()=0;
virtual float pole_powierzchni_calkowitej()=0;
virtual void pobierz_dane()=0;
};

class Stozek : public Bryla {
private: 
    float tworzaca();
public:
    float r,h,l;
    void pobierz_dane(){
        cout << "\nWysokosc stozka: "; cin >> h;
        cout << "Dlugosc podstawy stozka: "; cin >> r;
        cout << "Dlugosc boku stozka: ";cin >> l;
        cout << " \n";}
    float objetosc(){return (3.14*r*r*h)/3;};
    float pole_powierzchni_calkowitej() {return 3.14*r*r+3.14*r*l;};


};

class Czworoscian_Foremny : public Bryla {
private: 
// jakies niepodane w zadaniu zmienne/funkcje
public:
    float e;
    void pobierz_dane(){cout << "\nBok czworoscianu: "; cin >> e; cout <<"\n";}
    float objetosc(){return (e*e*e*1.41)/12;}
    float pole_powierzchni_calkowitej(){return 1.73*e*e;};
};

class Kula : public Bryla {
public:
    float i;
    void pobierz_dane(){cout << "\nPodaj promien: "; cin >> i; cout <<"\n";}
    float objetosc(){return (4/3)*3.14*i*i*i;}
    float pole_powierzchni_calkowitej(){return 4*3.14*i*i;};
};

class Walec : public Bryla {
private:
// jakies niepodane w zadaniu zmienne/funkcje
public:
    float f,g;
    void pobierz_dane(){cout << "\nPodaj promien podstawy walca: "; cin >> f; cout << "Podaj wysokosc walca: "; cin >> g; cout <<"\n";}
    float objetosc(){return 3.14*f*f*g;}
    float pole_powierzchni_calkowitej(){return 2*3.14*f*f+2*3.14*f*g;};
};

class Prostopadloscian : public Bryla {
private:
// jakies niepodane w zadaniu zmienne/funkcje
public:
    float o,p,u;
    void pobierz_dane(){cout << "\nPodaj wymiar podstawy: "; cin >> o; cout << "Podaj wymiar drugiej podstawy: "; cin >> p; cout <<"Podaj wysokosc: "; cin >> u; cout <<"\n";}
    float objetosc(){return 2*(o*p+o*u+p*u);}
    float pole_powierzchni_calkowitej(){return o*p*u;}
};

void obsluga_bryly(Bryla&b){
    b.pobierz_dane();
    cout << "Objetosc 2: " << b.objetosc() << endl;
    cout << "PPC 2: " << b.pole_powierzchni_calkowitej() << endl;
}

int main(){
    
float a,b,c;

cout << "STOZEK";
Bryla *ptr = new Stozek; ptr->pobierz_dane();
cout << "Objetosc 1: " << ptr->objetosc()  << endl; 
cout << "PPC 1: " << ptr->pole_powierzchni_calkowitej();
delete ptr;

Stozek obiekt; 
cout << "\n"; obsluga_bryly(obiekt);
cin.clear();
cin.ignore();

cout << "\nCZWOROSCIAN FOREMNY";
Bryla *wsk = new Czworoscian_Foremny; wsk->pobierz_dane();
cout << "\nObjetosc 1: " << wsk->objetosc();
cout << "\nPPC 1: " << wsk->pole_powierzchni_calkowitej();
delete wsk;

Czworoscian_Foremny obiekt_1; 
cout << "\n"; obsluga_bryly(obiekt_1);
cin.clear();
cin.ignore();

cout << "\nKULA";
Bryla *abc = new Kula; abc->pobierz_dane();
cout << "Objetosc 1: " << abc->objetosc();
cout << "\nPPC 1: " << abc->pole_powierzchni_calkowitej();
delete abc;

Kula obiekt_2;
cout << "\n"; obsluga_bryly(obiekt_2);
cin.clear();
cin.ignore();

cout << "\nWALEC";
Bryla *dgr = new Walec; dgr->pobierz_dane();
cout << "Objetosc 1: " << dgr->objetosc();
cout << "\nPPC 1: " << dgr->pole_powierzchni_calkowitej();
delete dgr;

Walec obiekt_3;
cout << "\n"; obsluga_bryly(obiekt_3);
cin.clear();
cin.ignore();

cout << "\nPROSTOPADLOSCIAN";
Bryla *aop = new Prostopadloscian; aop->pobierz_dane();
cout << "Objetosc 1: " << aop->objetosc();
cout << "\nPPC 1: " << aop->pole_powierzchni_calkowitej();
delete aop;

return 0;
    
}
#include<iostream>
#include <ctime>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
    int n = 100000;

    int tablica[] = {

};
    int zamiana=0, porownanie=0;

    clock_t start;
    clock_t end;
    start=clock();

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++){
            
            porownanie++;
            if (tablica[j]>tablica[j+1])
            {
                swap(tablica[j], tablica[j+1]);
                zamiana++;
            }
        }

   }

    end=clock();

    double obl = 1.0*(end-start)/CLOCKS_PER_SEC;
    cout.precision(6);


    cout << "Liczba zamian: " << zamiana << endl;
    cout << "Liczba porownan: " << porownanie << endl;
    cout << "Czas: " << fixed << obl << " [s]" << endl;

    system("PAUSE >nul");
    return 0;
}

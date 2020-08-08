#include <ctime>
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void sortowanie_przez_wstawianie(int n, int *tab)
{
     int zamiana=0;
        
     int pom, j;
     for(int i=1; i<n; i++)
     {
             pom = tab[i];
             j = i-1;
             while(j>=0 && tab[j]>pom) 
             {
                        tab[j+1] = tab[j];
                        --j;
                        zamiana++;
             }
             tab[j+1] = pom;
     }     
     
    cout << "\n\n" << "Liczba zamian: " << zamiana << endl;
    cout << "\n" << "Liczba porownan: " << pom << endl;
}


int main()
{
  
    int tab[]={9,22,7,6,0,-5,19,42,60,1};
    int n = 10;
    
    clock_t start;
	clock_t end;
    start=clock();
    sortowanie_przez_wstawianie(n, tab);
    end=clock();
    
    double obl = 1.0*(end-start)/CLOCKS_PER_SEC;
    cout.precision(6);

    cout << "\n" << "Czas pracy algorytmu: "<< fixed<<  obl << " s" << endl;
 
    cin.ignore();
    cin.get();
    return 0;    
}

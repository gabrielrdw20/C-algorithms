#include<iostream>
#include <ctime>
#include <iomanip>
#include <conio.h>
using namespace std;

    void Sortowanie(int tab[], int size, int porownanie, int zamiana )
    {
        int k;
        for( int i = 0; i < size; i++ )
        {  
            k = i;
            for( int j = i + 1; j < size; j++ )
            {   porownanie++;
                if( tab[ j ] < tab[ k ] )
                {
                k = j; 
                swap( tab[ k ], tab[ i ] );
                zamiana++;
                }}}
    cout << "Liczba zamian: " << zamiana << endl;
    cout << "Liczba porownan: " << porownanie << endl;
}
int main()
{
    int tab[] = {9,2,7,1,4,1,11,10,1,11};
    int zamiana=0;
    int porownanie=0;
    int size=10;
    clock_t start;
    clock_t end;
    start=clock();
    Sortowanie(tab, size,porownanie, zamiana);
    end=clock();
    double obl = 1.0*(end-start)/CLOCKS_PER_SEC;
    cout.precision(6);
    cout << "Czas: " << fixed << obl << " [s]" << endl;
    system("PAUSE >nul");
    return 0;
}

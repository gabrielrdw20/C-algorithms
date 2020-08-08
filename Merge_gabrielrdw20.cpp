#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10;
int d[]={9,22,7,6,0,-5,19,42,60,1};

int p[N];

void MergeSort(int i_p, int i_k)
{
  int i_s,i1,i2,i;

  i_s = (i_p + i_k + 1) / 2;
  if(i_s - i_p > 1) MergeSort(i_p, i_s - 1);
  if(i_k - i_s > 0) MergeSort(i_s, i_k);
  i1 = i_p; i2 = i_s;
  for(i = i_p; i <= i_k; i++)
    p[i] = ((i1 == i_s) || ((i2 <= i_k) && (d[i1] > d[i2]))) ? d[i2++] : d[i1++];
  for(i = i_p; i <= i_k; i++) d[i] = p[i];
}

int main()
{
  int i;

  clock_t start;
  clock_t end;
  start=clock();
  MergeSort(0,N-1); 
  end=clock();

    double obl = 1.0*(end-start)/CLOCKS_PER_SEC;
    cout.precision(6);
    cout << "Czas: " << fixed << obl << " [s]" << endl;
  
  getchar();
} 
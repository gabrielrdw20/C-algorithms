#include<bits/stdc++.h>
#include<iostream>
#include<ctime>

using namespace std;

void quickSort(int arr[], int left, int right) {

      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      /* partition */
      while (i <= j) {

            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}


int main()
{
    int n=10;
    int arr[n]={9,22,7,6,0,-5,19,42,60,1};

      
      clock_t start;
      clock_t end; 
      start=clock();
      quickSort(arr, 0,n-1);
      end=clock();
      double obl = 1.0*(end-start)/CLOCKS_PER_SEC;
      cout.precision(6);
      cout << "Czas: " << fixed << obl << " [s]" << endl;	
/*   
   cout<<"Posortowana lista:\n";
      for(int i=0;i<n;i++)
      {
    	 cout<<arr[i]<<" ";
      }
*/
        system("PAUSE >nul");
}
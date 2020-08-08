#include <iostream>
#include <cstdlib>

using namespace std;

class Vector {
    private:
    	double x;
    	double y;
    	double z;
	public:
		Vector()
			{
			x=0;
			y=0;
			z=0;
			}
	Vector(int x, int y, int z) : x(x), y(y), z(z) {};
	
	void wypisz(){cout << "[" << x << ", " << y << ", " << z << "]" << "\n" << endl;}

	Vector operator +(Vector a)
		{
		Vector temp;
		temp.x = x + a.x;
		temp.y = y + a.y;
		temp.z = z + a.z;
		return temp;
		}

	Vector operator -(Vector b)
	    {
	    Vector temp;
	    temp.x = x - b.x;
	    temp.y = y - b.y;
	    temp.z = z - b.z;
	    return temp;
	    }

	Vector operator *(double c) // mnozenie przez liczbe
	    {
	    Vector temp;
	    temp.x = x * c;
	    temp.y = y * c;
	    temp.z = z * c;
	    return temp;
	    }

	  friend Vector operator /(Vector o, double d);
	  
	  friend double operator *(Vector q, Vector c); // iloczyn sklarny
};
	 double operator *(Vector q,Vector c) // iloczyn sklarny
	    {
	    Vector temp;
	    temp.x = q.x * c.x;
	    temp.y = q.y * c.y;
	    temp.z = q.z * c.z;
	    return (temp.x)+(temp.y)+(temp.z);
	    }

	  Vector operator  /(Vector o, double c)
    	{
    	Vector temp;
    	temp.x = o.x / c;
    	temp.y = o.y / c;
    	temp.z = o.z / c;
    	return temp;
        }

int main()
	{
	Vector w1(2,4,6);
	Vector w2(3,5,7);
	Vector w3;
	Vector w4;
	Vector w5;
	Vector w6;

	double wynik;

	w3=w1+w2;
	w4=w1-w2;
	wynik=w1*w2;
	w5=w1*3.2;
	w6=w1/3.2;

	cout << "Wektor w1: " << endl;
	w1.wypisz();

	cout << "Wektor w2: " << endl;
	w2.wypisz();

	cout << "Dodawanie wektorow w1 i w2: " << endl;
	w3.wypisz();

	cout << "Odejmowanie od wektora w1 wektora w2: " << endl;
	w4.wypisz();

	cout << "Iloczyn skalarny wektorow w1 i w2: " << endl;
	cout << wynik << endl;

	cout << "\nMnozenie wektora w1 przez liczbe 3.2: " << endl;
	w5.wypisz();

	cout << "Dzielenie wektora w1 przez liczbe 3.2: " << endl;
	w6.wypisz();

	return 0;
	}

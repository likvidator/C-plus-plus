#include "iostream"
using namespace std;

//Найдите самую большую цифру целого числа.


void main()
{
	int x;
	cin >> x;
	int z ;
	int max = 0;
	while (x != 0)
	{
		z= x % 10;
		x /= 10;
		if (z>max)
			max=z;
	}
	cout << max;
	cin.ignore();
	cin.ignore();
}


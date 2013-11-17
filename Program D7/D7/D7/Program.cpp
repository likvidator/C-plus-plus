#include "iostream"
#include "Math.h"
using namespace std;

//Даны вещественные числа a, h, натуральное число n.
//Вычислить f(a)+f(a+h)+f(a+2h)+...+f(a+hn) , где  f(x)=((x^2)+1)cos(x)

double funсtion(double x)
{
	return ((x*x)+1)*cos(x);
}

void main()
{
	double a,h,n;
	double sum=0;
	cout <<"Write a ";
	cin >> a;
	cout <<"Write h ";
	cin >> h;
	cout <<"Write n ";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		sum+=funсtion(a+h*i);
	}
	cout << sum;
	cin.ignore();
	cin.ignore();

}

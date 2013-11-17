#include "iostream"
#include "Math.h"
using namespace std;


//¬вести три числа. 
//≈сли они могут быть длинами сторон равнобедренного треугольника, 
//вычислить длины его высот. ¬ывести длину основани€ и длины высот в пор€дке возрастани€.

void sort(double a,double b,double c,double d )// —ортировка и вывод, четырех чисел по возврастанию.
{
	double swap;
	if (a>b)
	{
		swap=b;
		b=a;
		a=swap;
	}
	if (b>c)
	{
		swap=c;
		c=b;
		b=swap;
	}
	if (c>d)
	{
		swap=d;
		d=c;
		c=swap;
	}
	if (a>b)
	{
		swap=b;
		b=a;
		a=swap;
	}
		if (b>c)
	{
		swap=c;
		c=b;
		b=swap;
	}
	cout << a << " "<< b << " " << c << " "<< d;

}

void main()
{
	double a,b,c;
	double h,h1;
	cout <<"Write side a ";
	cin >> a;
	cout <<"Write side b ";
	cin >> b;
	cout <<"Write side c ";
	cin >> c;
	if ((a>0)&&(b>0)&&(c>0)&&(a+b>c)&&(a+c>b)&&(b+c>a))// ѕроверка на существование треугольника.
	{
		if ((a==b)||(c==b)||(a==c))// ѕроверка на равнобедренность.
		{
			if (a==b)
			{
				h=sqrt((a*a)-(c*c)/4);
				h1=sqrt((c*c)-(a*a)/4);
				sort(c,h,h1,h);
			}
			if (a==c)
			{
				h=sqrt((a*a)-(b*b)/4);
				h1=sqrt((b*b)-(a*a)/4);
				sort(b,h,h1,h);
			}
			if (c==b)
			{
				h=sqrt((c*c)-(a*a)/4);
				h1=sqrt((a*a)-(c*c)/4);
				sort(a,h,h1,h);
			}
		}
		else 
			cout <<"Not isosceles";
	}
	else 
		cout <<"Triangle not exist ";
	cin.ignore();
	cin.ignore();
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;
///�2
///��������� ����� ���� ����� ���������, ������� ������ 1000.

void main()
{
	int a = 0;
	int b = 1;
	int c;
	bool status=true;
	while (status)
	{
		c=b;
		b=a;
		a=b+c;
		if (a<1000)
		{
			cout << a ;
			cout << " ";
		}
		else 
			status=false;

	}
	cin.ignore();

}
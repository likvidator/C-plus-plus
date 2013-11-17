#include "iostream"
#include "Math.h"
using namespace std;

//Дана последовательность целых чисел, заканчивающаяся числом(константа).
//(является признаком окончания ввода и в саму последовательность не входит).
//Найти минимум из чисел, среднее арифметическое цифр которых равно 5.

int average_number(int x)// Функция нахождение среднеорифитическое цифр.
{
	int count = 0;
	int Sum = 0;
	while (x != 0)
	{
		Sum += x % 10;
		x /= 10;
		count++;
	}

	return Sum /= count;

}

void main()
{
	int x = 1; 
	int c = 456;    //Константа.
	int min = 10000;//Большое число.
	while (x != c)
	{
		cin >> x;
		if ((average_number(x) == 5)&&(x!=c))
			if (min > x)
				min = x;
	}
	if (min=10000)
		cout<< "Not found";
	else 
		cout << min;
	cin.ignore();
	cin.ignore();
}


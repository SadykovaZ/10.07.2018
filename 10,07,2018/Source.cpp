#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 8;
	double a[n] = { 4,7,0,20,17,11,1,18 };
	int b = 0;
	for (int pass = 0; pass < n - 1; pass++)
	{
		if (a[pass] > a[pass + 1])
		{
			swap(a[pass], a[pass + 1]);
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}



	/*const int n = 8;
	double a[n] = { 4,7,0,20,17,11,1,18 };

	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/



	/*const int n = 8;
	double a[n] = { 4,7,20,3,17,11,1,18 };
	double min_e, max_e;
	int  imax, imin, begin, end;
	double p = 1;

	min_e = a[0]; max_e = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min_e < a[i])
		{
			min_e = a[i];
			imin = i;
		}
		if (max_e > a[i])
		{
			max_e = a[i];
			imax = i;
		}
	}
	begin = imin < imax ? imin : imax;
	end = imin > imax ? imin : imax;



	for (int i = begin + 1; i < end; i++)
	{
		p *= a[i];
	}

	cout << p << endl;
*/




	system("pause");
	return 0;
}
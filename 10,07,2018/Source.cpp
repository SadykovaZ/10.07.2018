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
	double key=17;
	int low, high, middle;
	int i = 0;
	for (int pass = 0; pass < n ; pass++)
	{
		i = pass;
		while ((a[i]<a[i-1])&&i>0)
		{
			swap(a[i], a[i - 1]);
			i--;
		}
	}
	low = 0;
	high = n-1;
	while (low<=high)
	{
		middle = (low + high) / 2;
		if (key>a[middle])
		{
			low = middle + 1;
		}
		else if (key<a[middle])
		{
			high = middle - 1;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << middle << endl;
	



	////сортировка со вставками, selection search, сортировка с выбором
	//const int n = 8;
	//double a[n] = { 4,7,0,20,17,11,1,18 };
	//int i = 0;
	//for (int pass = 0; pass < n ; pass++)
	//{
	//	i = pass;
	//	while ((a[i]<a[i-1])&&i>0)
	//	{
	//		swap(a[i], a[i - 1]);
	//		i--;
	//	}
	//}
	//for (int i = 0; i < n; i++)
	//{
	//	cout << a[i] << " ";
	//}



	/*const int n = 8; пузырьковая сортировка
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
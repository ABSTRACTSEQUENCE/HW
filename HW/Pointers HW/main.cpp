#include<iostream>
using namespace std;
#include "Print.h"
#include "Rand.h"
#include "Sort.h"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int size_even = 0;
	int size_odd = 0;
	int* even = new int[size_even];
	int* odd = new int[size_odd];
	int arr[SIZE];
	rand(arr, SIZE);
	cout << "Исходный размер массива: "; print(arr, SIZE); cout  << endl;
	//sort(arr, even, odd, SIZE, size_even, size_odd);
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 != 0)
		{
			size_odd++;
			odd[i] = arr[i];
		}
		else
		{
			size_even++;
			even[i] = arr[i];
		}
	}
	cout << "\nЧётные числа из массива: "; print(even, size_even);
	cout << "\nНечётные числа из массива: "; print(odd, size_odd);
}
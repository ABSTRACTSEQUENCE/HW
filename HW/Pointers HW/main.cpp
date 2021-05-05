#include<iostream>
using namespace std;
#include "Print.h"
#include "Rand.h"
#include "Sort.h"
void main()
{
	setlocale(LC_ALL, "");
	int odd_size = 0;	
	int even_size = 0;
	const int SIZE = 5;
	int even_count = 0;
	int odd_count = 0;
	int* even = new int[even_size];
	int* odd = new int[odd_size];
	int arr[SIZE];
	rand(arr, SIZE);
	cout << "Исходный размер массива: "; print(arr, SIZE); cout  << endl;
	for (int i = 0; i < SIZE; i++) 
	{
		if (arr[i] % 2 == 0)
		{
			even_size++;
		}
		else(odd_size++);
	}
	cout << "\nEven: " << even_size;
	cout << "\nOdd: " << odd_size;
	//even
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[even_count] = arr[i];
			even_count++;
		}
	}
	//odd
	for (int i = 0; i < SIZE; i++)
	{		
		if (arr[i] % 2 != 0)
		{
			odd[odd_count] = arr[i];
			odd_count++;
		}
	}

	cout << "\nЧётные числа из массива: "; print(even, even_size);
	cout << "\nНечётные числа из массива: "; print(odd, odd_size);
} 
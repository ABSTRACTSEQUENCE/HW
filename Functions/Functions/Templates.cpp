#pragma once
using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#define temp template<typename T>
#define tab "\t"
temp void Print(T arr[], const int n)//Реализация функции или Определение функции (Function definition)
{
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

temp void ShiftLeft(T arr[], const int n, const int number_of_shifts)	//Сдвигает массивна заданное число элементов
{
	for (int i = 0; i < number_of_shifts; i++)	//Этот цикл сдвигает массив на number_of_shifts элементов
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

temp T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

temp double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

temp T  minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
temp T  maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

temp void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

temp void UniqueRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
temp void UniqueRand(T arr[], const int n, int maxRand, int minRand)
{
	srand(time(NULL));
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand; 
		arr[i] /= 100;
	}
}
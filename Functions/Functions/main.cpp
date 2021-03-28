#include <iostream>
using namespace std;
#define pause system("PAUSE"); system("CLS")

#include"Fill Rand.h"
#include"Templates.cpp"
///////////////////////////////////////////MAIN//////////////////////////////////////////////////////
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	UniqueRand(arr, n, 400, 500);
	cout << "Массив: "; Print(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максмальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "Отсортированный массив: "; Print(arr, n);
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	pause;
	/////////////////////////////////////////////   2  //////////////////////////////////
	const int m = 8;
	double brr[m];
	cout << "Второй массив:"; UniqueRand(brr, m, 200, 300); Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts; cout << endl;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	cout << "Сумма всех элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое: " << Avg(brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;
	Sort(brr, m);
	cout << "Отсортированный массив: "; Print(brr, m);
}
/////////////////////////////////////END////////////////////////////////////////////////////////

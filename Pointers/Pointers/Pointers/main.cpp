using namespace std;
#include<iostream>
//#define POINTERS_BASICS
//#define POINTER_AND_ARRAYS
void main() 
{
	setlocale(LC_ALL, "");
	
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
	int* pb;
	int b = 3;
	pb = &b;
	cout << *pb;
#endif // POINTERS_BASICS
#ifdef POINTER_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,5, 8, 13, 21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *arr + i << "\t";
	}
#endif
	int n = 5;
	cout << "Размер"; cin >> n;
	int* arr = new int[n];
	for(int i = 0;i<n;i++)
	{
		*(arr + i) = rand() % 100;
	}
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << "\t";
	}
} 
//прошлый урок
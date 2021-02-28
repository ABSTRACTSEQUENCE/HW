#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n)
{
	//��������� ������ ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767.
	}
}

void Print(int arr[], const int n)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)	//�������� �������� �������� ����� ���������
{
	for (int i = 0; i < number_of_shifts; i++)	//���� ���� �������� ������ �� number_of_shifts ���������
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions!" << endl;
	const int n = 5;
	int arr[n];
	//��������� ������ ���������� �������:
	//for (int i = 0; i < n; i++)
	//{
	//	arr[i] = rand();
	//	//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767.
	//}
	FillRand(arr, n);
	//������� ������ �� �����:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);

	//����� ������� �� �������� ����� ���������:
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	//������� ���������� ������ �� �����:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);

	//////////////////////////////////////////////////////////////////////

	const int m = 8;
	int brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
}
#include<iostream>
using namespace std;
void fillrand(int arr[], const int n);
void print(int arr[], const int n);
int* push_back(int arr[], int& n, const int value);
int* push_front(int arr[], int &n, const int value);
int* insert(int arr[], int& n, const int value, int index);
int* pop_back(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "������: "; cin >> n;
	int* arr = new int[n];
	fillrand(arr, n);
	print(arr, n);
	int value;
	cout << "\n������� �����, ������� ������ �������� � ������ = ";  cin >> value; cout << endl;
		system("CLS");
		print(arr, n); cout << endl;
		cout << "1) �������� " << value << " � ������ �������\n2) �������� " << value << " � ����� �������\n3)�� ���������� ������� (�� ��������)\n4)������� 1-� �������\n5)������� ��������� �������"<< endl;
		int choice; cin >> choice;
		if (choice == 1) 
		{
			arr = push_front(arr, n, value);
			print(arr, n); cout << endl;
		}
		if (choice == 2){ arr = push_back(arr, n, value); print(arr, n); cout << endl;}
		if (choice == 3)
		{
			cout << "�� ������ ������� �������� ����� " << value << " ?" << endl;
			int index; cin >> index;
			arr = insert(arr, n, value, index); print(arr, n);
		}
		if (choice == 4) 
		{
			arr = pop_back(arr, n);
			print(arr, n);
		}
}
	
int* push_back(int arr[], int &n, const int value)
{
	
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	buffer[n] = value;
	n++;
	arr = buffer;
	return arr;

}
int* push_front(int arr[], int &n, const int value)
{
	int* buffer = new int[n + 1];
	for(int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	buffer[0] = value;
	n++;
	arr = buffer;
	return arr;
}
// � insert � ���� ��������, �� ���� ��������� �������� ������
/*int* insert(int arr[], int& n, const int value, int index)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	int buffer2;
	
	for (int i = index ; i < n; i++) 
	{
		buffer2 = buffer[index];
		buffer[i] = buffer[i + 1]; 

	}
	buffer[index] = value;
	n++;
	arr = buffer;
	return arr;

} */ 

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	n++;
	arr = buffer;
	return arr;
}

void fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) 
	{
		arr[i] = rand() % 100;
	}
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
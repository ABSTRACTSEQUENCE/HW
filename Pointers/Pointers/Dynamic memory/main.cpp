#include<iostream>
using namespace std;
void fillrand(int arr[], const int n);
void print(int arr[], const int n);
int* push_back(int arr[], int& n, const int value);
int* push_front(int arr[], int &n, const int value);
int* insert(int arr[], int& n, const int value, int index);
int* pop_back(int arr[], int& n);
//int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int index);

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "������ �������: "; cin >> n;
	int* arr = new int[n];
	fillrand(arr, n);
	print(arr, n);
	int value;
	cout << "\n��������?\n1)�������� �������\n2)������� �������" << endl;
	int choice; cin >> choice;
	//��������
	if (choice == 1)
	{
		choice = 0;
		cout << "������� �����, ������� ����� �������� � ������: "; cin >> value;
		cout << "1) �������� " << value << " � ������ �������\n2) �������� " << value << " � ����� �������\n3)�������� " << value << " �� ���������� �������" << endl;
		cin >> choice;
		//� ������
		if (choice == 1)
		{
			choice = 0;
			arr = push_front(arr, n, value);
			print(arr, n); cout << endl;
		}
		//� �����
		if (choice == 2) { 
			choice = 0;
			arr = push_back(arr, n, value);
			print(arr, n); cout << endl; }
		//�� �������
		if (choice == 3)
		{
			choice = 0;
			cout << "�� ������ ������� �������� �����? " << value << " ?" << endl;
			int index; cin >> index;
			arr = insert(arr, n, value, index); print(arr, n);
		}
	}
	//�������
	if (choice == 2)
	{
		choice = 0;
		cout << "1)������� ������ ������� �������\n2)������� ��������� ������� �������\n3)������� ������� ������� �� �������" << endl;
		cin >> choice;
		//������� ������
		if (choice == 1)
		{
			choice = 0;
			arr = pop_back(arr, n);
			print(arr, n);
		}
		//������� ���������
		if (choice == 2)
		{
			choice = 0;
			n--;
			//arr = pop_front(arr, n);
			print(arr, n);
		}
		//������� �� �������
		if (choice == 3)
		{
			int index;
			cout << "�� ������ �������?" << endl;
			cin >> index;
			arr = erase(arr, n, index);
			print(arr, n); cout << endl;
		}
		
	}
}
	
int* push_back(int arr[], int &n, const int value)
{
	arr[n] = value;
	n++;
	return arr;
}
int* push_front(int arr[], int &n, const int value)
{
	int* buffer = new int[n + 1];
	for(int i = 0; i < n; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	n++;
	buffer[0] = value;
	arr = buffer;
	return arr;
}

int* insert(int arr[], int& n, const int value, int index)
{
	/*int* buffer = new int[n + 1];
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
	return arr;*/
	for (int i = n; i >= index; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[index] = value;
	n++;
	return arr;
}

int* pop_back(int arr[], int& n)
{
	int buffer = arr[n - 1];
	//����� ����� ����� ������� 0 �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	} 
	arr[n - 1] = buffer;
	n = n --;
	return arr;
}
/*int* pop_front(int arr[], int& n)
{
	�� ���� ������ ������ ����� ������� ������ ��� ���� ����� �������� n--
}*/
int* erase(int arr[], int& n, int index)
{
	for (int i = index; i <= n; i++) arr[i] = arr[i + 1];
	n--;
	return arr;
}

void fillrand(int arr[], const int n)
{
	srand(time(NULL));
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
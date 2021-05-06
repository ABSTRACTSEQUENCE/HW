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
	cout << "Размер массива: "; cin >> n;
	int* arr = new int[n];
	fillrand(arr, n);
	print(arr, n);
	int value;
	cout << "\nДействие?\n1)Добавить элемент\n2)Удалить элемент" << endl;
	int choice; cin >> choice;
	//Добавить
	if (choice == 1)
	{
		choice = 0;
		cout << "Введите число, которое нужно добавить в массив: "; cin >> value;
		cout << "1) Добавить " << value << " в начало массива\n2) Добавить " << value << " в конец массива\n3)Добавить " << value << " по указанному индексу" << endl;
		cin >> choice;
		//В начало
		if (choice == 1)
		{
			choice = 0;
			arr = push_front(arr, n, value);
			print(arr, n); cout << endl;
		}
		//В конец
		if (choice == 2) { 
			choice = 0;
			arr = push_back(arr, n, value);
			print(arr, n); cout << endl; }
		//По индексу
		if (choice == 3)
		{
			choice = 0;
			cout << "По какому индексу вставить число? " << value << " ?" << endl;
			int index; cin >> index;
			arr = insert(arr, n, value, index); print(arr, n);
		}
	}
	//Удалить
	if (choice == 2)
	{
		choice = 0;
		cout << "1)Удалить первый элемент массива\n2)Удалить последний элемент массива\n3)Удалить элемент массива по индексу" << endl;
		cin >> choice;
		//Удалить первый
		if (choice == 1)
		{
			choice = 0;
			arr = pop_back(arr, n);
			print(arr, n);
		}
		//Удалить последний
		if (choice == 2)
		{
			choice = 0;
			n--;
			//arr = pop_front(arr, n);
			print(arr, n);
		}
		//Удалить по индексу
		if (choice == 3)
		{
			int index;
			cout << "По какому индексу?" << endl;
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
	//Сдвиг влево чтобы закрыть 0 элемент
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
	Не вижу смысла писать целую функцию только для того чтобы написать n--
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
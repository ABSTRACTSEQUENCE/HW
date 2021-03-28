#include<iostream>
#include<ctime>
using namespace std;
#define tab "\t"
void UniqueRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
//FillRand int double float char
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
/////////////////////
//Print int double float char
template<typename T>
void Print(T arr[], const int n);
////////////////////
//Shift int double float char
template<typename T>
void ShiftLeft(T arr[], const int n, const int number_of_shifts);
///////////////////
//Sum int double float char
template<typename T>
T Sum(T arr[], const int n);
//////////////////
//Avg int double float char
template<typename T>
double Avg(T arr[], const int n);

/////////////////
template<typename T>
T minValueIn(T arr[], const int n);

/////////////////
//Max int double float char
template<typename T>
T  maxValueIn(T arr[], const int n);
///////////////////////////////////
//Sort int double float char
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);
///////////////////////////////////////////MAIN//////////////////////////////////////////////////////
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n, 400, 500);
	cout << "Массив: "; Print(arr, n); cout << endl;
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максмальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	/////////////////////////////////////////////   2  //////////////////////////////////
	cout << "\n Второй массив:" << endl;
	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts; cout << endl;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	cout << "Сумма всех элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое: " << Avg(brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;

}
/////////////////////////////////////END////////////////////////////////////////////////////////
void UniqueRand(int arr[], const int n, int maxRand, int minRand)
{
	srand(time(NULL));
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand; // Я так и не смог понять эту формулу, у меня мозги вскипают когда я пытаюсь понять как она работает. Пришлось скопировать с другой функции
		arr[i] /= 100;
	}
}
//Rand
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//Заполняем массив случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	//Заполняем массив случайными числами:
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand) {
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand) {
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
//Print
template<typename T>
void Print(T arr[], const int n)//Реализация функции или Определение функции (Function definition)
{
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//Shift
template<typename T>
void ShiftLeft(T arr[], const int n, const int number_of_shifts)	//Сдвигает массивна заданное число элементов
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

template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
T  minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template<typename T>
T  maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

//Sort
void Sort(int arr[], const int n)
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
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
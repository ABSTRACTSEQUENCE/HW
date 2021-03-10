#include <iostream>;
using namespace std;
int sum(int arr[]) {
	cout << "\nСумма всех чисел из массива: ";
	int summ = 0;
	for (int i = 0; i < 10; i++) {
		summ += arr[i];
	}
	cout << summ << endl;
	system("PAUSE");
	system("CLS");
	return summ;
}
void print(int arr[]) {
	cout << "Все элементы массива: ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("PAUSE");
	system("CLS");
}
void ar(int arr[],int sum) {
	int answer = sum / 10;
	cout << endl << "Среднее арифметическое всех чисел из массива: " << answer << endl;
	system("PAUSE");
	system("CLS");
}
void main() {
	int a[10];
	setlocale(LC_ALL, "");
	/////////////////////////////////////////
	cout << "Введите элементы массива:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];}
	int summ = sum(a);
	ar(a, summ);
	/* Не успел доделать макс и мин число, 
	а так же сортировку, обязательно всё сделаю
	и буду обновлять дз на гитхабе после каждого
	выполненного пункта

	int p = 0;
	int n = 0;
	bool answer = false;
	while (true) {
		n = 0;
		if (answer == true) { break; }
		else {
			p++;
			for (int i = 0; i < 10; i++) {
				if (p == a[n]) { cout << a[p]; answer = true; }
				else(n++);
			}
		}
	}*/
			
	system("PAUSE");
	
}
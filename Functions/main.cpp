#include <iostream>;
using namespace std;
int sum(int arr[]) {
	cout << "\n����� ���� ����� �� �������: ";
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
	cout << "��� �������� �������: ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("PAUSE");
	system("CLS");
}
void ar(int arr[],int sum) {
	int answer = sum / 10;
	cout << endl << "������� �������������� ���� ����� �� �������: " << answer << endl;
	system("PAUSE");
	system("CLS");
}
void main() {
	int a[10];
	setlocale(LC_ALL, "");
	/////////////////////////////////////////
	cout << "������� �������� �������:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	//int summ = sum(a);
	//ar(a, summ);
	////////////////
	int p = 0;
	bool answer = false;
	cout << endl << "����������";
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (p == a[j]) { cout << a[p]; break; answer = true; }
		}
		if (answer == true) { p++;};
		else { break }
	}
		
	}

			
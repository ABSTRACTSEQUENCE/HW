#include<iostream>
#include<conio.h>
using namespace std;

//Loop - �����
/*

while - ���� � ������������;
do...while - ���� � ������������;
for - ���� �� �������� ����� ��������

*/

#define PI 3.14

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE_1
	int n;	//���������� ��������
	int i = 0;	//������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello World\n" << endl;
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	cout << (bool)0.000001 << endl;
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << endl;
	}
	cout << "�����" << endl;
	system("PAUSE");
	system("CLS");
	system("DIR");
	cout << "Hasta LaVista" << endl;
	3;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
#endif // WHILE_2

#ifdef DO_WHILE
	char key;	//��� �������
	do
	{
		key = _getch();	//������� getch() ������� ������� �������, 
						//� ���������� ASCII-��� ������� �������.
						//���� ASCII-��� �� ��������� � ���������� key.
		//cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // DO_WHILE

	int number;	//�����, �������� � ����������
	cout << "������� �����: "; cin >> number;
	cout << number << endl;
	int reverse_number = 0;	//�����, ��������� ��������
	int buffer = number;	//������� ����� ���������� �����, 
							//����� ����� � ���������� �� ����������, 
							///������ �������� � ������
	while (buffer)
	{
		reverse_number *= 10;
		reverse_number += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Maybe the next time" << endl;
	}
}